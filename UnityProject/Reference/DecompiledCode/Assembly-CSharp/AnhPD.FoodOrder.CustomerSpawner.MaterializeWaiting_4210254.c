// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$MaterializeWaiting
// address: 0x4210254
// body: available
// range: 0x4210254-0x4210573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4210570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_CustomerSpawner__MaterializeWaiting(long param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  
  if ((DAT_09516c6e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2650);
    FUN_03f5c2a4(&DAT_091b2670);
    FUN_03f5c2a4(&DAT_091ac290);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918f9d8);
    DAT_09516c6e = 1;
  }
  uVar5 = AnhPD_FoodOrder_CustomerSpawner__get_IsAllSpawned(param_1);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = AnhPD_FoodOrder_CustomerSpawner__DropAutoStaffIfNothingToClean(param_1),
     (uVar5 & 1) == 0)) {
    uVar5 = extraout_d0;
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_04210570;
    uVar6 = FUN_057e0998(*(long *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),DAT_091ac290);
    uVar5 = AnhPD_FoodOrder_CustomerSpawner__IsCleanStaffOnHold(param_1,uVar6);
    if ((uVar5 & 1) == 0) {
      lVar7 = AnhPD_FoodOrder_CustomerSpawner__AcquireEmptyLine(param_1);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
      if ((uVar5 & 1) != 0) {
        iVar1 = *(int *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = iVar1 + 1;
        uVar5 = extraout_d0_00;
        if (*(long *)(param_1 + 0x88) != 0) {
          uVar6 = FUN_057e0998(*(long *)(param_1 + 0x88),iVar1,DAT_091ac290);
          lVar10 = *(long *)(param_1 + 0x40);
          uVar5 = extraout_d0_01;
          if (lVar10 != 0) {
            uVar8 = (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),uVar6,*(undefined8 *)(lVar10 + 0x28));
            uVar5 = extraout_d0_02;
            if (*(long *)(param_1 + 0x98) != 0) {
              iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x18);
              lVar10 = thunk_FUN_03f9944c(DAT_0918f9d8);
              *(undefined4 *)(lVar10 + 0x28) = 0xbf800000;
              System_Object___ctor(lVar10,0);
              *(long *)(lVar10 + 0x10) = lVar7;
              thunk_FUN_03f5d7b8((long *)(lVar10 + 0x10),lVar7);
              *(undefined8 *)(lVar10 + 0x18) = uVar6;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x18),uVar6);
              *(undefined8 *)(lVar10 + 0x20) = uVar8;
              uVar5 = thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x20),uVar8);
              lVar13 = *(long *)(param_1 + 0xa8);
              bVar4 = 0;
              *(bool *)(lVar10 + 0x2d) = lVar13 != 0;
              if ((iVar1 == 0) && (lVar13 == 0)) {
                bVar4 = AnhPD_FoodOrder_CustomerSpawner__CanAdmit(param_1,lVar10);
                uVar5 = extraout_d0_03;
              }
              lVar9 = *(long *)(param_1 + 0x98);
              *(byte *)(lVar10 + 0x2c) = bVar4 & 1;
              lVar13 = DAT_091b2650;
              if (lVar9 != 0) {
                lVar11 = *(long *)(lVar9 + 0x10);
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar12 = lVar10;
                    uVar5 = thunk_FUN_03f5d7b8(plVar12,lVar10);
                  }
                  else {
                    uVar5 = FUN_057e0c68(lVar9,lVar10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  }
                  if (((*(long *)(param_1 + 0x30) != 0) && (lVar7 != 0)) &&
                     (uVar5 = AnhPD_FoodOrder_FCustomerLine__SetEnterFromRight
                                        (lVar7,*(undefined1 *)(*(long *)(param_1 + 0x30) + 0x58)),
                     *(long *)(param_1 + 0x30) != 0)) {
                    AnhPD_FoodOrder_CustomerLineLayout__ExitTargetWorldX();
                    uVar5 = AnhPD_FoodOrder_FCustomerLine__SetExitTargetX(lVar7);
                    lVar13 = *(long *)(param_1 + 0x30);
                    if (*(char *)(lVar10 + 0x2c) == '\0') {
                      if (lVar13 == 0) goto LAB_04210570;
                      AnhPD_FoodOrder_CustomerLineLayout__PlaceWaitingLine(lVar13,lVar7,iVar1);
                    }
                    else {
                      if (lVar13 == 0) goto LAB_04210570;
                      AnhPD_FoodOrder_CustomerLineLayout__PlaceNewLineAtOrderSlot
                                (lVar13,lVar7,uVar8);
                    }
                    if (*(char *)(lVar10 + 0x2c) == '\0') {
                      fVar14 = *(float *)(param_1 + 0x58) +
                               *(float *)(param_1 + 0x5c) * (float)iVar1;
                      fVar17 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 100) * (float)iVar1
                      ;
                      fVar15 = 1.0;
                      if (fVar14 <= 1.0) {
                        fVar15 = fVar14;
                      }
                      fVar3 = 0.0;
                      if (0.0 <= fVar14) {
                        fVar3 = fVar15;
                      }
                      uVar5 = (ulong)(uint)fVar3;
                      uVar16 = *(undefined4 *)(param_1 + 0x68);
                      fVar15 = 0.05;
                      if (0.05 <= fVar17) {
                        fVar15 = fVar17;
                      }
                    }
                    else {
                      uVar5 = 0;
                      uVar16 = 0x3f800000;
                      fVar15 = 1.0;
                    }
                    if (*(long *)(lVar7 + 0x30) != 0) {
                      AnhPD_FoodOrder_CustomerLineController__SetWaitingLook(uVar5,fVar15,uVar16,0);
                      AnhPD_FoodOrder_FCustomerLine__EnterWaitingShell(lVar7,uVar6,0);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
LAB_04210570:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar5);
      }
    }
  }
  return 0;
}

