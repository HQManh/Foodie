// rea decompile_all
// name: CakeOrder.TrungKien.EventVisualRestaurant$$ChangeVisualHome
// address: 0x42f1b38
// body: available
// range: 0x42f1b38-0x42f1cef inclusive
// range: 0x42f1cf4-0x42f1cf7 inclusive
// range: 0x42f1cfc-0x42f1cff inclusive
// range: 0x42f1d4c-0x42f1d73 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f1cec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f1cf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f1cfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f1d6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f1d70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_TrungKien_EventVisualRestaurant__ChangeVisualHome(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_095174b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2d38);
    FUN_03f5c2a4(&DAT_091a2d40);
    FUN_03f5c2a4(&DAT_091a2d48);
    FUN_03f5c2a4(&DAT_091a80e8);
    FUN_03f5c2a4(&DAT_091a80f0);
    FUN_03f5c2a4(&DAT_091a80f8);
    FUN_03f5c2a4(&DAT_091acd60);
    DAT_095174b9 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_053ebbdc(*(long *)(param_1 + 0x28),DAT_091a80f0);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar4 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) goto LAB_042f1d6c;
          iVar2 = *(int *)(lVar4 + 0x10);
          FUN_057e185c(&local_98,*(long *)(lVar4 + 0x18),DAT_091acd60);
          local_80 = local_98;
          local_98 = 0;
          puStack_78 = puStack_90;
          local_70 = local_88;
          puStack_90 = &local_80;
          while (uVar3 = FUN_071bd28c(&local_80,DAT_091a2d40), lVar4 = local_70, (uVar3 & 1) != 0) {
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = FUN_053ebc3c(*(long *)(param_1 + 0x28),local_70,DAT_091a80f8);
            if ((uVar3 & 1) == 0) {
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              UnityEngine_GameObject__SetActive(lVar4,iVar2 == param_2,0);
              if (iVar2 == param_2) {
                if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_053ec72c(*(long *)(param_1 + 0x28),lVar4,DAT_091a80e8);
              }
            }
          }
          FUN_071bd288(&local_80,DAT_091a2d38);
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
      }
      return;
    }
  }
LAB_042f1d6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

