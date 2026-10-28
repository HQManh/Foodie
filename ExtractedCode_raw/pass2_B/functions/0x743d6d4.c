// rea decompile_all
// name: System.Text.StringBuilder$$set_Length
// address: 0x743d6d4
// body: available
// range: 0x743d6d4-0x743d937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743d768 to 0x743d938 System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x743d784 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743d934 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder__set_Length(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  if ((DAT_0952106b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0952106b = 1;
  }
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09225370);
    puVar6 = &DAT_09206b98;
  }
  else {
    if (param_2 <= *(int *)(param_1 + 0x28)) {
      if ((param_2 == 0) && (*(long *)(param_1 + 0x18) == 0)) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        return;
      }
      iVar1 = *(int *)(param_1 + 0x24);
      iVar3 = *(int *)(param_1 + 0x20) + iVar1;
      lVar11 = param_1;
      if (0 < param_2 - iVar3) {
        System_Text_StringBuilder__Append(param_1,0);
        return;
      }
      do {
        iVar9 = *(int *)(lVar11 + 0x24);
        if (iVar9 <= param_2) {
          if (lVar11 != param_1) {
            plVar10 = (long *)(param_1 + 0x10);
            lVar12 = *plVar10;
            if (lVar12 == 0) break;
            iVar9 = *(int *)(lVar12 + 0x18);
            iVar8 = iVar9;
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187e80,iVar9);
              iVar8 = *(int *)(lVar12 + 0x18);
            }
            uVar2 = System_Math__Max((iVar3 * 6) / 5,iVar8,0);
            iVar3 = System_Math__Min(iVar1 + iVar9,uVar2,0);
            lVar12 = *(long *)(lVar11 + 0x10);
            if (lVar12 == 0) break;
            iVar3 = iVar3 - *(int *)(lVar11 + 0x24);
            if (*(int *)(lVar12 + 0x18) < iVar3) {
              lVar12 = FUN_03f5c394(DAT_0917fcc8,iVar3);
              System_Array__Copy(*(undefined8 *)(lVar11 + 0x10),0,lVar12,0,
                                 *(undefined4 *)(lVar11 + 0x20),0);
              *plVar10 = lVar12;
            }
            else {
              *plVar10 = lVar12;
            }
            thunk_FUN_03f5d7b8(plVar10,lVar12);
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
            iVar9 = *(int *)(lVar11 + 0x24);
            *(int *)(param_1 + 0x24) = iVar9;
          }
          *(int *)(param_1 + 0x20) = param_2 - iVar9;
          return;
        }
        plVar10 = (long *)(lVar11 + 0x18);
        lVar11 = *plVar10;
      } while (*plVar10 != 0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09225370);
    puVar6 = &DAT_092188e0;
  }
  uVar7 = thunk_FUN_03fc39d4(puVar6);
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar7,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091da4a8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

