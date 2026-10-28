// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.PetAssistantDataFormatter$$Deserialize
// address: 0x424c018
// body: available
// range: 0x424c018-0x424c55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424c558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_GeneratedMessagePackResolver_CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_PetAssistantDataFormatter__Deserialize
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  
  if ((DAT_09516eaf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ccec0);
    FUN_03f5c2a4(&DAT_091ccf40);
    FUN_03f5c2a4(&DAT_091ccf48);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917b168);
    FUN_03f5c2a4(&DAT_0917b1e8);
    FUN_03f5c2a4(&DAT_0917b1f0);
    FUN_03f5c2a4(&DAT_091934a8);
    DAT_09516eaf = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    lVar12 = 0;
  }
  else {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) {
LAB_0424c558:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
    uVar11 = *(undefined8 *)(param_3 + 0x10);
    iVar3 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    lVar12 = thunk_FUN_03f9944c(DAT_091934a8);
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_PetAssistantData___ctor(lVar12,0);
    if (0 < iVar3) {
      iVar13 = 0;
      do {
        if (iVar13 < 3) {
          if (iVar13 == 0) {
            if (*(int *)(DAT_09184938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar5 = (long *)FUN_04264fcc(uVar11,DAT_091ccf48);
            if (plVar5 == (long *)0x0) goto LAB_0424c558;
            lVar8 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b1f0) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0424c420;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917b1f0,1);
LAB_0424c420:
            uVar7 = (*(code *)*puVar6)(plVar5,param_2,param_3,puVar6[1]);
            if (lVar12 == 0) goto LAB_0424c558;
            *(undefined8 *)(lVar12 + 0x10) = uVar7;
            lVar8 = lVar12 + 0x10;
          }
          else {
            if (iVar13 == 1) {
              bVar2 = MessagePack_MessagePackReader__ReadBoolean(param_2,0);
              if (lVar12 != 0) {
                *(byte *)(lVar12 + 0x18) = bVar2 & 1;
                goto LAB_0424c520;
              }
              goto LAB_0424c558;
            }
            if (iVar13 != 2) goto LAB_0424c31c;
            if (*(int *)(DAT_09184938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar5 = (long *)FUN_04264fcc(uVar11,DAT_091ccec0);
            if (plVar5 == (long *)0x0) goto LAB_0424c558;
            lVar8 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b168) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0424c4f8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917b168,1);
LAB_0424c4f8:
            uVar7 = (*(code *)*puVar6)(plVar5,param_2,param_3,puVar6[1]);
            if (lVar12 == 0) goto LAB_0424c558;
            *(undefined8 *)(lVar12 + 0x20) = uVar7;
            lVar8 = lVar12 + 0x20;
          }
LAB_0424c51c:
          thunk_FUN_03f5d7b8(lVar8,uVar7);
        }
        else if (iVar13 < 5) {
          if (iVar13 == 3) {
            if (*(int *)(DAT_09184938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar5 = (long *)FUN_04264fcc(uVar11,DAT_091ccf48);
            if (plVar5 != (long *)0x0) {
              lVar8 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_0917b1f0) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_0424c458;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917b1f0,1);
LAB_0424c458:
              uVar7 = (*(code *)*puVar6)(plVar5,param_2,param_3,puVar6[1]);
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x28) = uVar7;
                lVar8 = lVar12 + 0x28;
                goto LAB_0424c51c;
              }
            }
            goto LAB_0424c558;
          }
          if (iVar13 == 4) {
            if (*(int *)(DAT_09184938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar5 = (long *)FUN_042651bc(uVar11,DAT_091ccf40);
            if (plVar5 == (long *)0x0) goto LAB_0424c558;
            lVar8 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b1e8) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0424c4c8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917b1e8,1);
LAB_0424c4c8:
            uVar4 = (*(code *)*puVar6)(plVar5,param_2,param_3,puVar6[1]);
            if (lVar12 == 0) goto LAB_0424c558;
            *(undefined4 *)(lVar12 + 0x30) = uVar4;
          }
          else {
LAB_0424c31c:
            MessagePack_MessagePackReader__Skip(param_2,0);
          }
        }
        else {
          if (iVar13 == 5) {
            if (*(int *)(DAT_09184938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar5 = (long *)FUN_04264fcc(uVar11,DAT_091ccf48);
            if (plVar5 != (long *)0x0) {
              lVar8 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_0917b1f0) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_0424c490;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917b1f0,1);
LAB_0424c490:
              uVar7 = (*(code *)*puVar6)(plVar5,param_2,param_3,puVar6[1]);
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x38) = uVar7;
                lVar8 = lVar12 + 0x38;
                goto LAB_0424c51c;
              }
            }
            goto LAB_0424c558;
          }
          if (iVar13 != 6) goto LAB_0424c31c;
          uVar4 = MessagePack_MessagePackReader__ReadInt32(param_2,0);
          if (lVar12 == 0) goto LAB_0424c558;
          *(undefined4 *)(lVar12 + 0x40) = uVar4;
        }
LAB_0424c520:
        iVar13 = iVar13 + 1;
      } while (iVar13 != iVar3);
    }
    *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
  }
  return lVar12;
}

