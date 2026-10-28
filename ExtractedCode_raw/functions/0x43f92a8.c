// rea decompile_all
// name: Coffee.UIEffects.TmpProxy$$GetSubMeshUI
// address: 0x43f92a8
// body: available
// range: 0x43f92a8-0x43f939f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f939c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Coffee_UIEffects_TmpProxy__GetSubMeshUI(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_09517e21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0ab0);
    FUN_03f5c2a4(&DAT_091b0ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517e21 = 1;
  }
  if (param_1 == 0) {
LAB_043f939c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      iVar1 = iVar2 + param_3 + iVar7;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar1 / iVar2;
      }
      lVar4 = FUN_057e0998(param_1,iVar1 - iVar3 * iVar2,DAT_091b0ab8);
      if (lVar4 == 0) goto LAB_043f939c;
      uVar6 = *(undefined8 *)(lVar4 + 0xf0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar6,param_2,0);
      if ((uVar5 & 1) != 0) {
        return lVar4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  return 0;
}

