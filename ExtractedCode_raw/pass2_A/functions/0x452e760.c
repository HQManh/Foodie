// rea decompile_all
// name: Utilities.UIScrollSnap$$SelectPanel
// address: 0x452e760
// body: available
// range: 0x452e760-0x452e86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452e818 to 0x452eb2c Utilities.UIScrollSnap$$GoToPreviousPanel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452e854 to 0x452ead0 Utilities.UIScrollSnap$$GoToNextPanel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452e868 to 0x452e9dc Utilities.UIScrollSnap$$GoToPanel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__SelectPanel(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = Utilities_UIScrollSnap__GetNearestPanel();
  fVar3 = (float)Utilities_UIScrollSnap__GetDisplacementFromCenter(param_3,uVar2);
  iVar1 = *(int *)(param_3 + 0x7c);
  if ((iVar1 != 0) && (*(float *)(param_3 + 0x5c) < *(float *)(param_3 + 0xbc))) {
    if (iVar1 == 2) {
      iVar1 = *(int *)(param_3 + 0xb8);
      if (((iVar1 == 3) && (0.0 < fVar3)) || ((iVar1 == 0 && (0.0 < param_2)))) {
LAB_0452e80c:
        Utilities_UIScrollSnap__GoToPreviousPanel(param_3);
        return;
      }
      if (((iVar1 == 2) && (fVar3 < 0.0)) || ((iVar1 == 1 && (param_2 < 0.0)))) goto LAB_0452e848;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      iVar1 = *(int *)(param_3 + 0xb8);
      if (((iVar1 == 3) && (fVar3 < 0.0)) || ((iVar1 == 0 && (param_2 < 0.0)))) {
LAB_0452e848:
        Utilities_UIScrollSnap__GoToNextPanel(param_3);
        return;
      }
      if (((iVar1 == 2) && (0.0 < fVar3)) || ((iVar1 == 1 && (0.0 < param_2)))) goto LAB_0452e80c;
    }
  }
  Utilities_UIScrollSnap__GoToPanel(param_3,uVar2);
  return;
}

