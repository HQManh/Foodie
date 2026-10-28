// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.DayResultFormatter$$Deserialize
// address: 0x424a960
// body: available
// range: 0x424a960-0x424abdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424abdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_GeneratedMessagePackResolver_CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_DayResultFormatter__Deserialize
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  
  if ((DAT_09516ea9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193490);
    FUN_03f5c2a4(&DAT_091ccf48);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917b1f0);
    DAT_09516ea9 = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    lVar11 = 0;
  }
  else {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) {
LAB_0424abdc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    iVar2 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    lVar11 = thunk_FUN_03f9944c(DAT_09193490);
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_DayResult___ctor(lVar11,0);
    if (0 < iVar2) {
      iVar12 = 0;
      do {
        if (iVar12 < 2) {
          if (iVar12 == 0) {
            if (*(int *)(DAT_09184938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar4 = (long *)FUN_04264fcc(uVar10,DAT_091ccf48);
            if (plVar4 == (long *)0x0) goto LAB_0424abdc;
            lVar7 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b1f0) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_0424ab7c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b1f0,1);
LAB_0424ab7c:
            uVar6 = (*(code *)*puVar5)(plVar4,param_2,param_3,puVar5[1]);
            if (lVar11 == 0) goto LAB_0424abdc;
            *(undefined8 *)(lVar11 + 0x10) = uVar6;
            thunk_FUN_03f5d7b8(lVar11 + 0x10,uVar6);
          }
          else if (iVar12 == 1) {
            uVar3 = MessagePack_MessagePackReader__ReadInt32(param_2,0);
            if (lVar11 == 0) goto LAB_0424abdc;
            *(undefined4 *)(lVar11 + 0x18) = uVar3;
          }
          else {
LAB_0424aae0:
            MessagePack_MessagePackReader__Skip(param_2,0);
          }
        }
        else if (iVar12 == 2) {
          uVar3 = MessagePack_MessagePackReader__ReadInt32(param_2,0);
          if (lVar11 == 0) goto LAB_0424abdc;
          *(undefined4 *)(lVar11 + 0x1c) = uVar3;
        }
        else {
          if (iVar12 != 3) goto LAB_0424aae0;
          uVar3 = MessagePack_MessagePackReader__ReadInt32(param_2,0);
          if (lVar11 == 0) goto LAB_0424abdc;
          *(undefined4 *)(lVar11 + 0x20) = uVar3;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar2);
    }
    *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
  }
  return lVar11;
}

