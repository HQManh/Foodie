// rea decompile_all
// name: System.Text.StringBuilder$$ReplaceAllInChunk
// address: 0x743fe58
// body: available
// range: 0x743fe58-0x7440003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743ffb4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7440000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder__ReplaceAllInChunk
               (undefined8 param_1,long param_2,int param_3,long param_4,int param_5,long param_6)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int local_5c;
  long local_58;
  
  local_58 = 0;
  local_5c = 0;
  if (param_3 < 1) {
    return;
  }
  if (param_6 != 0) {
    iVar5 = thunk_FUN_03f68190(0);
    iVar3 = *(int *)(param_6 + 0x10);
    local_58 = param_4;
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x18) != 0) {
        iVar4 = (iVar3 - param_5) * param_3;
        local_5c = *(int *)(param_2 + 0x20);
        if (0 < iVar4) {
          if (param_4 == 0) goto LAB_07440000;
          System_Text_StringBuilder__MakeRoom
                    (param_1,*(int *)(param_4 + 0x24) + local_5c,iVar4,&local_58,&local_5c,1);
          iVar3 = *(int *)(param_6 + 0x10);
        }
        System_Text_StringBuilder__ReplaceInPlaceAtChunk
                  (param_1,&local_58,&local_5c,param_6 + iVar5,iVar3);
        uVar6 = (ulong)*(uint *)(param_2 + 0x18);
        if (uVar6 != 0) {
          uVar7 = 0;
          do {
            if (param_3 - 1 == uVar7) {
              if (-1 < iVar4) {
                return;
              }
              if (local_58 != 0) {
                System_Text_StringBuilder__Remove
                          (param_1,local_5c + *(int *)(local_58 + 0x24),-iVar4,&local_58,&local_5c);
                return;
              }
              goto LAB_07440000;
            }
            uVar1 = uVar7 + 1;
            if (uVar6 <= uVar1) break;
            lVar8 = param_2 + uVar7 * 4;
            iVar3 = *(int *)(lVar8 + 0x24);
            uVar2 = *(int *)(lVar8 + 0x20) + param_5;
            if (iVar4 == 0) {
              local_5c = (iVar3 - uVar2) + local_5c;
            }
            else {
              if ((param_4 == 0) || (lVar8 = *(long *)(param_4 + 0x10), lVar8 == 0))
              goto LAB_07440000;
              if (*(uint *)(lVar8 + 0x18) <= uVar2) break;
              System_Text_StringBuilder__ReplaceInPlaceAtChunk
                        (param_1,&local_58,&local_5c,lVar8 + (long)(int)uVar2 * 2 + 0x20,
                         iVar3 - uVar2);
            }
            System_Text_StringBuilder__ReplaceInPlaceAtChunk
                      (param_1,&local_58,&local_5c,param_6 + iVar5,*(undefined4 *)(param_6 + 0x10));
            uVar6 = (ulong)*(uint *)(param_2 + 0x18);
            uVar7 = uVar1;
          } while (uVar1 < uVar6);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07440000:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

