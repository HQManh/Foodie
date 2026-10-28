// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainDetailsMode$$OnDoneHide
// address: 0x43221b0
// body: available
// range: 0x43221b0-0x43224b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43224a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43224a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43224ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43224b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainDetailsMode__OnDoneHide(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517660 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a00e8);
    FUN_03f5c2a4(&DAT_091a00c8);
    FUN_03f5c2a4(&DAT_091a0108);
    FUN_03f5c2a4(&DAT_091a6900);
    FUN_03f5c2a4(&DAT_091a6918);
    FUN_03f5c2a4(&DAT_091a6930);
    FUN_03f5c2a4(&DAT_091a6938);
    FUN_03f5c2a4(&DAT_091a6908);
    FUN_03f5c2a4(&DAT_091a6920);
    FUN_03f5c2a4(&DAT_091a6940);
    FUN_03f5c2a4(&DAT_091a6928);
    FUN_03f5c2a4(&DAT_091a6910);
    FUN_03f5c2a4(&DAT_091bea38);
    FUN_03f5c2a4(&DAT_091bea48);
    FUN_03f5c2a4(&DAT_091bea40);
    DAT_09517660 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  CakeOrder_BaseUI_UIElementWithAnim__OnDoneHide(param_1,0);
  if (*(long *)(param_1 + 0x80) != 0) {
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x80),0);
    if (*(long *)(param_1 + 0x68) != 0) {
      CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
                (*(long *)(param_1 + 0x68),0);
      if (*(long *)(param_1 + 0x70) != 0) {
        CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
                  (*(long *)(param_1 + 0x70),0);
        if (*(long *)(param_1 + 0x78) != 0) {
          CakeOrder_Home_UIHomeTabPageMainDetailsMode_ConfigByMode__HideImmediate
                    (*(long *)(param_1 + 0x78),0);
          if ((*(long *)(param_1 + 0x98) != 0) &&
             (lVar1 = FUN_06fd8278(*(long *)(param_1 + 0x98),DAT_091a0108), lVar1 != 0)) {
            FUN_06544014(&local_d0,lVar1,DAT_091bea48);
            local_70 = local_c0;
            puStack_78 = puStack_c8;
            local_80 = local_d0;
            local_d0 = 0;
            puStack_c8 = &local_80;
            while (uVar2 = FUN_072759a8(&local_80,DAT_091a6938), (uVar2 & 1) != 0) {
              if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              CakeOrder_BaseUI_UIElementAbstract__HideImmediate(local_70,0);
            }
            FUN_072759a4(&local_80,DAT_091a6930);
            if ((*(long *)(param_1 + 0xa8) != 0) &&
               (lVar1 = FUN_06fd8278(*(long *)(param_1 + 0xa8),DAT_091a00e8), lVar1 != 0)) {
              FUN_06544014(&local_d0,lVar1,DAT_091bea40);
              local_90 = local_c0;
              puStack_98 = puStack_c8;
              local_a0 = local_d0;
              local_d0 = 0;
              puStack_c8 = &local_a0;
              while (uVar2 = FUN_072759a8(&local_a0,DAT_091a6920), (uVar2 & 1) != 0) {
                if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                CakeOrder_BaseUI_UIElementAbstract__HideImmediate(local_90,0);
              }
              FUN_072759a4(&local_a0,DAT_091a6918);
              if ((*(long *)(param_1 + 0xb8) != 0) &&
                 (lVar1 = FUN_06fd8278(*(long *)(param_1 + 0xb8),DAT_091a00c8), lVar1 != 0)) {
                FUN_06544014(&local_b8,lVar1,DAT_091bea38);
                local_d0 = 0;
                puStack_c8 = &local_b8;
                while( true ) {
                  uVar2 = FUN_072759a8(&local_b8,DAT_091a6908);
                  if ((uVar2 & 1) == 0) {
                    FUN_072759a4(&local_b8,DAT_091a6900);
                    return;
                  }
                  if (local_a8 == 0) break;
                  CakeOrder_BaseUI_UIElementAbstract__HideImmediate(local_a8,0);
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

