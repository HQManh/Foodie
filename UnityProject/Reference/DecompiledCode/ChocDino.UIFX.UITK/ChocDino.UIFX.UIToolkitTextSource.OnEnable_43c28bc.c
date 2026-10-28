// rea decompile_all
// name: ChocDino.UIFX.UIToolkitTextSource$$OnEnable
// address: 0x43c28bc
// body: available
// range: 0x43c28bc-0x43c29c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c29c4 to 0x89a5b80 UnityEngine.UI.MaskableGraphic$$OnEnable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_UIToolkitTextSource__OnEnable(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09517b87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09203ee0);
    DAT_09517b87 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = UnityEngine_Shader__Find(DAT_09203ee0,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_09187e28);
      UnityEngine_Material___ctor(uVar2,uVar3,0);
      *(undefined8 *)(param_1 + 0x178) = uVar2;
      thunk_FUN_03f5d7b8(param_1 + 0x178,uVar2);
    }
  }
  ChocDino_UIFX_UIToolkitTextSource__CreateDocument(param_1);
  if (*(long *)(param_1 + 0x188) != 0) {
    ChocDino_UIFX_UIToolkitTextSource__CreateTexture(param_1);
  }
  UnityEngine_UI_MaskableGraphic__OnEnable(param_1,0);
  return;
}

