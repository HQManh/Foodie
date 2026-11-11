using System.IO;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEditor.Toolbars;
using UnityEngine;

/// <summary>
/// Main toolbar dropdown (next to Play/Pause/Step) for switching between all FS* scenes.
/// </summary>
public static class FSSceneSwitcherToolbar
{
    const string ElementPath = "Foodie/FS Scene Switcher";

    [MainToolbarElement(ElementPath, defaultDockPosition = MainToolbarDockPosition.Middle)]
    public static MainToolbarElement CreateDropdown()
    {
        var current = EditorSceneManager.GetActiveScene().name;
        var label = string.IsNullOrEmpty(current) ? "Select FS Scene" : current;
        var content = new MainToolbarContent(label);
        return new MainToolbarDropdown(content, ShowMenu);
    }

    static void ShowMenu(Rect dropDownRect)
    {
        var menu = new GenericMenu();
        var activePath = EditorSceneManager.GetActiveScene().path;
        foreach (var guid in AssetDatabase.FindAssets("t:Scene"))
        {
            var path = AssetDatabase.GUIDToAssetPath(guid);
            if (!path.StartsWith("Assets/")) continue;
            var name = Path.GetFileNameWithoutExtension(path);
            if (!name.StartsWith("FS")) continue;
            var scenePath = path;
            menu.AddItem(new GUIContent(name), scenePath == activePath, () =>
            {
                if (EditorApplication.isPlaying) return;
                if (EditorSceneManager.SaveCurrentModifiedScenesIfUserWantsTo())
                {
                    EditorSceneManager.OpenScene(scenePath);
                    MainToolbar.Refresh(ElementPath);
                }
            });
        }
        if (menu.GetItemCount() == 0) menu.AddDisabledItem(new GUIContent("No FS scenes found"));
        menu.DropDown(dropDownRect);
    }

    [InitializeOnLoadMethod]
    static void Init()
    {
        EditorSceneManager.activeSceneChangedInEditMode += (_, __) => MainToolbar.Refresh(ElementPath);
        EditorSceneManager.sceneOpened += (_, __) => MainToolbar.Refresh(ElementPath);
    }
}
