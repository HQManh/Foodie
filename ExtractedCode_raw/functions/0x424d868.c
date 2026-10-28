// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.CakeOrder.SaveProfile.PlayerProfileDataManager.SaveDataPackFormatter$$Deserialize
// address: 0x424d868
// body: available
// range: 0x424d868-0x424de07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424de04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_GeneratedMessagePackResolver_CakeOrder_SaveProfile_PlayerProfileDataManager_SaveDataPackFormatter__Deserialize
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  
  if ((DAT_09516eb7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ccec8);
    FUN_03f5c2a4(&DAT_091ccee0);
    FUN_03f5c2a4(&DAT_091cced0);
    FUN_03f5c2a4(&DAT_091cced8);
    FUN_03f5c2a4(&DAT_091ccf48);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917b188);
    FUN_03f5c2a4(&DAT_0917b170);
    FUN_03f5c2a4(&DAT_0917b178);
    FUN_03f5c2a4(&DAT_0917b180);
    FUN_03f5c2a4(&DAT_0917b1f0);
    FUN_03f5c2a4(&DAT_091934d8);
    DAT_09516eb7 = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    lVar7 = 0;
  }
  else {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) {
LAB_0424de04:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    if ((int)uVar2 < 1) {
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar14 = 0;
      do {
        if ((int)uVar14 < 2) {
          if (uVar14 == 0) {
            if (*(int *)(DAT_09184938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar3 = (long *)FUN_04264fcc(uVar8,DAT_091ccf48);
            if (plVar3 == (long *)0x0) goto LAB_0424de04;
            lVar7 = *plVar3;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_0917b1f0) {
                  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_0424dcc0;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b1f0,1);
LAB_0424dcc0:
            uVar13 = (*(code *)*puVar4)(plVar3,param_2,param_3,puVar4[1]);
          }
          else if (uVar14 == 1) {
            if (*(int *)(DAT_09184938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar3 = (long *)FUN_04264fcc(uVar8,DAT_091cced0);
            if (plVar3 == (long *)0x0) goto LAB_0424de04;
            lVar7 = *plVar3;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_0917b178) {
                  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_0424dd18;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b178,1);
LAB_0424dd18:
            uVar12 = (*(code *)*puVar4)(plVar3,param_2,param_3,puVar4[1]);
          }
          else {
LAB_0424dc48:
            MessagePack_MessagePackReader__Skip(param_2,0);
          }
        }
        else if (uVar14 == 2) {
          if (*(int *)(DAT_09184938 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar3 = (long *)FUN_04264fcc(uVar8,DAT_091cced8);
          if (plVar3 == (long *)0x0) goto LAB_0424de04;
          lVar7 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917b180) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0424dc68;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b180,1);
LAB_0424dc68:
          uVar11 = (*(code *)*puVar4)(plVar3,param_2,param_3,puVar4[1]);
        }
        else if (uVar14 == 3) {
          if (*(int *)(DAT_09184938 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar3 = (long *)FUN_04264fcc(uVar8,DAT_091ccee0);
          if (plVar3 == (long *)0x0) goto LAB_0424de04;
          lVar7 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917b188) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0424dc94;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b188,1);
LAB_0424dc94:
          uVar10 = (*(code *)*puVar4)(plVar3,param_2,param_3,puVar4[1]);
        }
        else {
          if (uVar14 != 4) goto LAB_0424dc48;
          if (*(int *)(DAT_09184938 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar3 = (long *)FUN_04264fcc(uVar8,DAT_091ccec8);
          if (plVar3 == (long *)0x0) goto LAB_0424de04;
          lVar7 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917b170) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0424dcec;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b170,1);
LAB_0424dcec:
          uVar9 = (*(code *)*puVar4)(plVar3,param_2,param_3,puVar4[1]);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar2);
    }
    lVar7 = thunk_FUN_03f9944c(DAT_091934d8);
    CakeOrder_SaveProfile_PlayerProfileDataManager_SaveDataPack___ctor(lVar7,uVar13,0);
    if (1 < (int)uVar2) {
      if (lVar7 == 0) goto LAB_0424de04;
      *(undefined8 *)(lVar7 + 0x18) = uVar12;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x18),uVar12);
      if (uVar2 != 2) {
        *(undefined8 *)(lVar7 + 0x20) = uVar11;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x20),uVar11);
        if (3 < uVar2) {
          *(undefined8 *)(lVar7 + 0x28) = uVar10;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x28),uVar10);
          if (uVar2 != 4) {
            *(undefined8 *)(lVar7 + 0x30) = uVar9;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x30),uVar9);
          }
        }
      }
    }
    *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
  }
  return lVar7;
}

