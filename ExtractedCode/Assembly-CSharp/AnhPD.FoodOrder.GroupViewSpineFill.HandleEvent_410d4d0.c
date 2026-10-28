// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineFill$$HandleEvent
// address: 0x410d4d0
// body: available
// range: 0x410d4d0-0x410d717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410d710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410d714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineFill__HandleEvent(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_095161cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5450);
    FUN_03f5c2a4(&DAT_091a5458);
    FUN_03f5c2a4(&DAT_091a5460);
    FUN_03f5c2a4(&DAT_091b2e40);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095161cf = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    uVar4 = 0;
    if (param_2 != 0) {
      if (*(long *)(param_2 + 0x10) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
      }
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x10);
      FUN_057e185c(&local_88,*(long *)(param_1 + 0x50),DAT_091b2e40);
      local_60 = local_78;
      uStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while( true ) {
        while( true ) {
          while( true ) {
            do {
              do {
                uVar2 = FUN_071bd28c(&local_70,DAT_091a5458);
                lVar1 = local_60;
                if ((uVar2 & 1) == 0) {
                  FUN_071bd288(&local_70,DAT_091a5450);
                  return;
                }
              } while (local_60 == 0);
              uVar6 = *(undefined8 *)(local_60 + 0x20);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
            } while (((uVar2 & 1) == 0) ||
                    ((uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar1 + 0x18),0),
                     (uVar2 & 1) == 0 &&
                     (uVar2 = System_String__op_Inequality(*(undefined8 *)(lVar1 + 0x18),uVar4,0),
                     (uVar2 & 1) != 0))));
            uVar2 = System_String__op_Equality(*(undefined8 *)(lVar1 + 0x10),uVar5,0);
            if ((uVar2 & 1) != 0) break;
            if ((lVar1 == *(long *)(param_1 + 0x70)) &&
               (uVar2 = System_String__op_Equality(*(undefined8 *)(lVar1 + 0x30),uVar5,0),
               (uVar2 & 1) != 0)) {
              AnhPD_FoodOrder_GroupViewSpineFill__StopLoop(param_1);
            }
          }
          uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar1 + 0x30),0);
          if ((uVar2 & 1) != 0) break;
          AnhPD_FoodOrder_GroupViewSpineFill__StartLoop(param_1,lVar1);
        }
        lVar3 = *(long *)(DAT_091b48d0 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        if (**(long **)(lVar3 + 0xb8) == 0) break;
        CakeOrder_AudioManagerCakeOrder__PlaySfx
                  (*(undefined4 *)(lVar1 + 0x28),**(long **)(lVar3 + 0xb8),
                   *(undefined8 *)(lVar1 + 0x20),5,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

