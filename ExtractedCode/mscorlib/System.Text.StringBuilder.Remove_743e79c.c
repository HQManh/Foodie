// rea decompile_all
// name: System.Text.StringBuilder$$Remove
// address: 0x743e79c
// body: available
// range: 0x743e79c-0x743e92b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743e84c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743e928 to 0x743e508 System.Text.StringBuilder$$ThreadSafeCopy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder__Remove
               (long param_1,int param_2,int param_3,long *param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_0952107b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba9a8);
    DAT_0952107b = 1;
  }
  *param_4 = param_1;
  thunk_FUN_03f5d7b8(param_4,param_1);
  lVar3 = *param_4;
  if (lVar3 != 0) {
    lVar6 = 0;
    iVar4 = 0;
    do {
      iVar8 = *(int *)(lVar3 + 0x24);
      iVar2 = (param_3 + param_2) - iVar8;
      if (iVar2 < 0) {
        *(int *)(lVar3 + 0x24) = iVar8 - param_3;
      }
      else {
        lVar1 = lVar3;
        if (lVar6 != 0) {
          lVar1 = lVar6;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        iVar8 = param_2 - iVar8;
        lVar6 = lVar1;
        if (-1 < iVar8) {
          *param_5 = iVar8;
          iVar2 = *(int *)(lVar1 + 0x20);
          if (lVar1 != lVar3) {
            *(int *)(lVar3 + 0x20) = iVar8;
            plVar7 = (long *)(lVar1 + 0x18);
            *plVar7 = lVar3;
            thunk_FUN_03f5d7b8(plVar7);
            lVar3 = *param_4;
            if (lVar3 == 0) break;
            *(int *)(lVar1 + 0x24) = *(int *)(lVar3 + 0x20) + *(int *)(lVar3 + 0x24);
            if (*param_5 == 0) {
              *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
              thunk_FUN_03f5d7b8(plVar7);
              *param_4 = lVar1;
              thunk_FUN_03f5d7b8(param_4,lVar1);
            }
            iVar8 = 0;
          }
          *(int *)(lVar1 + 0x20) = (iVar8 - iVar4) + *(int *)(lVar1 + 0x20);
          if (iVar8 - iVar4 != 0) {
            uVar5 = *(undefined8 *)(lVar1 + 0x10);
            auVar9 = FUN_06109734(uVar5,DAT_091ba9a8);
            System_Text_StringBuilder__ThreadSafeCopy
                      (uVar5,iVar4,auVar9._0_8_,auVar9._8_8_,iVar8,iVar2 - iVar4);
            return;
          }
          return;
        }
      }
      *param_4 = *(long *)(lVar3 + 0x18);
      thunk_FUN_03f5d7b8(param_4);
      lVar3 = *param_4;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

