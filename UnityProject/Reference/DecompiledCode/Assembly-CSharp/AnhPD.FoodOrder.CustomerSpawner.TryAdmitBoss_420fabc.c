// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$TryAdmitBoss
// address: 0x420fabc
// body: available
// range: 0x420fabc-0x420fd2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420fb34 to 0x4211734 AnhPD.FoodOrder.CustomerSpawner$$AdmitIncomingBoss (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420fd10 to 0x421186c AnhPD.FoodOrder.CustomerSpawner$$ChaseWaitingQueue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420fd28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerSpawner__TryAdmitBoss(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  if ((DAT_09516c78 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd4b8);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918f9d8);
    DAT_09516c78 = 1;
  }
  plVar7 = (long *)(param_1 + 0xa0);
  if (*plVar7 != 0) {
    AnhPD_FoodOrder_CustomerSpawner__AdmitIncomingBoss(param_1);
    return;
  }
  plVar8 = (long *)(param_1 + 0xa8);
  if (*plVar8 == 0) {
    return;
  }
  uVar2 = AnhPD_FoodOrder_CustomerSpawner__HasPreBossWaiting(param_1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = AnhPD_FoodOrder_CustomerSpawner__HasOrderingBoss(param_1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  iVar1 = AnhPD_FoodOrder_CustomerSpawner__OrderingCount(param_1);
  if (0 < iVar1) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    uVar3 = (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),uVar6,*(undefined8 *)(lVar5 + 0x28));
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar2 = AnhPD_FoodOrder_CustomerLineLayout__CanFitNewLine(*(long *)(param_1 + 0x30),uVar3,1,0)
      ;
      if ((uVar2 & 1) != 0) {
        lVar5 = AnhPD_FoodOrder_CustomerSpawner__AcquireEmptyLine(param_1);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Implicit(lVar5,0);
        if ((uVar2 & 1) != 0) {
          *plVar8 = 0;
          thunk_FUN_03f5d7b8(plVar8,0);
          lVar4 = thunk_FUN_03f9944c(DAT_0918f9d8);
          *(undefined4 *)(lVar4 + 0x28) = 0xbf800000;
          System_Object___ctor(lVar4,0);
          *(long *)(lVar4 + 0x10) = lVar5;
          thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),lVar5);
          *(undefined8 *)(lVar4 + 0x18) = uVar6;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),uVar6);
          *(undefined8 *)(lVar4 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20),uVar3);
          *(undefined1 *)(lVar4 + 0x2c) = 1;
          *plVar7 = lVar4;
          thunk_FUN_03f5d7b8(plVar7,lVar4);
          if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04b78684(1,DAT_091cd4b8);
          if (((*(long *)(param_1 + 0x30) != 0) && (lVar5 != 0)) &&
             (AnhPD_FoodOrder_FCustomerLine__SetEnterFromRight
                        (lVar5,*(char *)(*(long *)(param_1 + 0x30) + 0x58) == '\0'),
             *(long *)(param_1 + 0x30) != 0)) {
            AnhPD_FoodOrder_CustomerLineLayout__ExitTargetWorldX();
            AnhPD_FoodOrder_FCustomerLine__SetExitTargetX(lVar5);
            if (*(long *)(param_1 + 0x30) != 0) {
              AnhPD_FoodOrder_CustomerLineLayout__PlaceNewLineAtAreaCenter
                        (*(long *)(param_1 + 0x30),lVar5);
              AnhPD_FoodOrder_FCustomerLine__SetWaitingLook(0,0x3f800000,0x3f800000,0,lVar5);
              AnhPD_FoodOrder_FCustomerLine__EnterWaitingShell(lVar5,uVar6,1);
              AnhPD_FoodOrder_CustomerSpawner__ChaseWaitingQueue(param_1);
              return;
            }
          }
          goto LAB_0420fd28;
        }
      }
      return;
    }
  }
LAB_0420fd28:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

