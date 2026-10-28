// rea decompile_all
// name: System.Globalization.SortKey$$Compare
// address: 0x753b464
// body: available
// range: 0x753b464-0x753b5d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753b564 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753b5cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753b5d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 System_Globalization_SortKey__Compare(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  
  if (param_1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09222f98;
  }
  else {
    if (param_2 != (long *)0x0) {
      if (param_1 != param_2) {
        lVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
        lVar5 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
        if (lVar4 != lVar5) {
          lVar4 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
          lVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if ((lVar4 == 0) || (lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = *(int *)(lVar4 + 0x18);
          iVar2 = *(int *)(lVar5 + 0x18);
          iVar9 = iVar2;
          if (iVar1 <= iVar2) {
            iVar9 = iVar1;
          }
          if (0 < iVar9) {
            pbVar10 = (byte *)(lVar4 + 0x20);
            pbVar11 = (byte *)(lVar5 + 0x20);
            iVar12 = iVar1;
            iVar3 = iVar2;
            do {
              if ((iVar12 == 0) || (iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (*pbVar10 != *pbVar11) {
                if (*pbVar11 <= *pbVar10) {
                  return 1;
                }
                return 0xffffffff;
              }
              pbVar10 = pbVar10 + 1;
              iVar9 = iVar9 + -1;
              pbVar11 = pbVar11 + 1;
              iVar3 = iVar3 + -1;
              iVar12 = iVar12 + -1;
            } while (iVar9 != 0);
          }
          if (iVar1 != iVar2) {
            if (iVar2 <= iVar1) {
              return 1;
            }
            return 0xffffffff;
          }
        }
      }
      return 0;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09222fa0;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentNullException___ctor(uVar6,uVar8,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d9690);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar8);
}

