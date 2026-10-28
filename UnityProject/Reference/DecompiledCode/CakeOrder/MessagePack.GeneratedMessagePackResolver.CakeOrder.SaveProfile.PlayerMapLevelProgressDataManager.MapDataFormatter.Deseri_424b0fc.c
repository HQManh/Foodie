// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapDataFormatter$$Deserialize
// address: 0x424b0fc
// body: available
// range: 0x424b0fc-0x424b7e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424b7e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_GeneratedMessagePackResolver_CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapDataFormatter__Deserialize
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  
  if ((DAT_09516eab & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ccee8);
    FUN_03f5c2a4(&DAT_091ccef8);
    FUN_03f5c2a4(&DAT_091ccef0);
    FUN_03f5c2a4(&DAT_091ccf30);
    FUN_03f5c2a4(&DAT_091ccf48);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917b1d8);
    FUN_03f5c2a4(&DAT_0917b198);
    FUN_03f5c2a4(&DAT_0917b1a0);
    FUN_03f5c2a4(&DAT_0917b190);
    FUN_03f5c2a4(&DAT_0917b1f0);
    FUN_03f5c2a4(&DAT_09193498);
    DAT_09516eab = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    return 0;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) {
LAB_0424b7e4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  iVar3 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
  lVar5 = thunk_FUN_03f9944c(DAT_09193498);
  CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapData___ctor(lVar5,0);
  if (iVar3 < 1) {
LAB_0424b7b8:
    *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
    return lVar5;
  }
  iVar13 = 0;
LAB_0424b290:
  if (iVar13 < 6) {
    if (iVar13 < 2) {
      if (iVar13 != 0) {
        if (iVar13 != 1) {
LAB_0424b61c:
          MessagePack_MessagePackReader__Skip(param_2,0);
          goto LAB_0424b7ac;
        }
        if (*(int *)(DAT_09184938 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar6 = (long *)FUN_042651bc(uVar12,DAT_091ccf30);
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_0917b1d8) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_0424b63c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b1d8,1);
LAB_0424b63c:
          uVar4 = (*(code *)*puVar7)(plVar6,param_2,param_3,puVar7[1]);
          if (lVar5 != 0) {
            *(undefined4 *)(lVar5 + 0x18) = uVar4;
            goto LAB_0424b7ac;
          }
        }
        goto LAB_0424b7e4;
      }
      if (*(int *)(DAT_09184938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)FUN_04264fcc(uVar12,DAT_091ccf48);
      if (plVar6 == (long *)0x0) goto LAB_0424b7e4;
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b1f0) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0424b6a4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b1f0,1);
LAB_0424b6a4:
      uVar8 = (*(code *)*puVar7)(plVar6,param_2,param_3,puVar7[1]);
      if (lVar5 == 0) goto LAB_0424b7e4;
      *(undefined8 *)(lVar5 + 0x10) = uVar8;
      lVar9 = lVar5 + 0x10;
    }
    else if (iVar13 == 2) {
      if (*(int *)(DAT_09184938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)FUN_04264fcc(uVar12,DAT_091ccef8);
      if (plVar6 == (long *)0x0) goto LAB_0424b7e4;
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b1a0) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0424b6dc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b1a0,1);
LAB_0424b6dc:
      uVar8 = (*(code *)*puVar7)(plVar6,param_2,param_3,puVar7[1]);
      if (lVar5 == 0) goto LAB_0424b7e4;
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      lVar9 = lVar5 + 0x20;
    }
    else {
      if (iVar13 != 3) goto LAB_0424b61c;
      if (*(int *)(DAT_09184938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)FUN_04264fcc(uVar12,DAT_091ccef8);
      if (plVar6 == (long *)0x0) goto LAB_0424b7e4;
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b1a0) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0424b66c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b1a0,1);
LAB_0424b66c:
      uVar8 = (*(code *)*puVar7)(plVar6,param_2,param_3,puVar7[1]);
      if (lVar5 == 0) goto LAB_0424b7e4;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      lVar9 = lVar5 + 0x28;
    }
  }
  else {
    if (iVar13 < 8) {
      if (iVar13 == 6) {
        if (*(int *)(DAT_09184938 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar6 = (long *)FUN_04264fcc(uVar12,DAT_091ccee8);
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_0917b190) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_0424b74c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b190,1);
LAB_0424b74c:
          uVar8 = (*(code *)*puVar7)(plVar6,param_2,param_3,puVar7[1]);
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x30) = uVar8;
            lVar9 = lVar5 + 0x30;
            goto LAB_0424b7a8;
          }
        }
        goto LAB_0424b7e4;
      }
      if (iVar13 != 7) goto LAB_0424b61c;
      uVar4 = MessagePack_MessagePackReader__ReadInt32(param_2,0);
      if (lVar5 == 0) goto LAB_0424b7e4;
      *(undefined4 *)(lVar5 + 0x38) = uVar4;
      goto LAB_0424b7ac;
    }
    if (iVar13 == 8) {
      if (*(int *)(DAT_09184938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)FUN_04264fcc(uVar12,DAT_091ccef0);
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917b198) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0424b714;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b198,1);
LAB_0424b714:
        uVar8 = (*(code *)*puVar7)(plVar6,param_2,param_3,puVar7[1]);
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x40) = uVar8;
          lVar9 = lVar5 + 0x40;
          goto LAB_0424b7a8;
        }
      }
      goto LAB_0424b7e4;
    }
    if (iVar13 != 10) {
      if (iVar13 != 0xb) goto LAB_0424b61c;
      bVar2 = MessagePack_MessagePackReader__ReadBoolean(param_2,0);
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x50) = bVar2 & 1;
        goto LAB_0424b7ac;
      }
      goto LAB_0424b7e4;
    }
    if (*(int *)(DAT_09184938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)FUN_04264fcc(uVar12,DAT_091ccef0);
    if (plVar6 == (long *)0x0) goto LAB_0424b7e4;
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917b198) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0424b784;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b198,1);
LAB_0424b784:
    uVar8 = (*(code *)*puVar7)(plVar6,param_2,param_3,puVar7[1]);
    if (lVar5 == 0) goto LAB_0424b7e4;
    *(undefined8 *)(lVar5 + 0x48) = uVar8;
    lVar9 = lVar5 + 0x48;
  }
LAB_0424b7a8:
  thunk_FUN_03f5d7b8(lVar9,uVar8);
LAB_0424b7ac:
  iVar13 = iVar13 + 1;
  if (iVar13 == iVar3) goto LAB_0424b7b8;
  goto LAB_0424b290;
}

