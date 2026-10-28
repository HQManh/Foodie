// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$SpawnDirect
// address: 0x42120a0
// body: available
// range: 0x42120a0-0x421221f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4212218 to 0x4207f34 AnhPD.FoodOrder.CustomerLineLayout$$Relayout (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x421221c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerSpawner__SpawnDirect(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_09516c84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acab0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c84 = 1;
  }
  lVar3 = AnhPD_FoodOrder_CustomerSpawner__AcquireEmptyLine(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
  lVar2 = DAT_091acab0;
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = lVar3;
          thunk_FUN_03f5d7b8(plVar7,lVar3);
        }
        else {
          FUN_057e0c68(lVar5,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(param_1 + 0xb8) = lVar3;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0xb8),lVar3);
        if ((*(long *)(param_1 + 0x30) != 0) && (lVar3 != 0)) {
          AnhPD_FoodOrder_FCustomerLine__SetEnterFromRight
                    (lVar3,*(undefined1 *)(*(long *)(param_1 + 0x30) + 0x58));
          if (*(long *)(param_1 + 0x30) != 0) {
            AnhPD_FoodOrder_CustomerLineLayout__ExitTargetWorldX();
            AnhPD_FoodOrder_FCustomerLine__SetExitTargetX(lVar3);
            AnhPD_FoodOrder_FCustomerLine__NextCustomer(lVar3,param_2,param_3);
            if (param_2 != 0) {
              AnhPD_FoodOrder_FCustomerLine__InitWaitTime
                        (*(float *)(param_2 + 0x24) * *(float *)(param_1 + 0xc0),lVar3);
              if (*(long *)(param_1 + 0x30) != 0) {
                AnhPD_FoodOrder_CustomerLineLayout__Relayout(*(long *)(param_1 + 0x30),0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

