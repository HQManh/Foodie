// rea decompile_all
// name: CakeOrder.Localization.ArabicShaper$$ForRtlText
// address: 0x42e08d8
// body: available
// range: 0x42e08d8-0x42e0a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e0a3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Localization_ArabicShaper__ForRtlText(undefined8 param_1)

{
  int iVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_09517433 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181520);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09517433 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar3 & 1) != 0) {
    return param_1;
  }
  if (*(int *)(DAT_09181520 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = CakeOrder_Localization_ArabicShaper__Shape(param_1);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x10);
    plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar5,iVar1 + 8,0);
    iVar1 = *(int *)(lVar4 + 0x10);
    if (-1 < iVar1) {
      iVar8 = 0;
      iVar7 = 0;
      do {
        if ((iVar1 <= iVar7) || (sVar2 = System_String__get_Chars(lVar4,iVar7,0), sVar2 == 10)) {
          if (*(int *)(DAT_09181520 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          CakeOrder_Localization_ArabicShaper__ProcessLine(lVar4,iVar8,iVar7,plVar5,0);
          if (iVar7 < *(int *)(lVar4 + 0x10)) {
            if (plVar5 == (long *)0x0) goto LAB_042e0a3c;
            System_Text_StringBuilder__Append(plVar5,10,0);
          }
          iVar8 = iVar7 + 1;
        }
        iVar7 = iVar7 + 1;
        iVar1 = *(int *)(lVar4 + 0x10);
      } while (iVar7 <= iVar1);
    }
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x042e0a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return uVar6;
    }
  }
LAB_042e0a3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

