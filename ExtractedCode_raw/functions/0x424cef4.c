// rea decompile_all
// name: MessagePack.GeneratedMessagePackResolver.CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.ToolDataFormatter$$Deserialize
// address: 0x424cef4
// body: available
// range: 0x424cef4-0x424d12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424d12c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_GeneratedMessagePackResolver_CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_ToolDataFormatter__Deserialize
          (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  
  if ((DAT_09516eb3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ccf48);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917b1f0);
    FUN_03f5c2a4(&DAT_091934c0);
    DAT_09516eb3 = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    uVar9 = 0;
  }
  else {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) {
LAB_0424d12c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
    uVar9 = *(undefined8 *)(param_3 + 0x10);
    iVar2 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    if (iVar2 < 1) {
      uVar3 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar3 = 0;
      iVar11 = 0;
      do {
        if (iVar11 == 1) {
          uVar3 = MessagePack_MessagePackReader__ReadInt32(param_2,0);
        }
        else if (iVar11 == 0) {
          if (*(int *)(DAT_09184938 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar4 = (long *)FUN_04264fcc(uVar9,DAT_091ccf48);
          if (plVar4 == (long *)0x0) goto LAB_0424d12c;
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917b1f0) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_0424d0ac;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b1f0,1);
LAB_0424d0ac:
          uVar10 = (*(code *)*puVar5)(plVar4,param_2,param_3,puVar5[1]);
        }
        else {
          MessagePack_MessagePackReader__Skip(param_2,0);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar2);
    }
    uVar9 = thunk_FUN_03f9944c(DAT_091934c0);
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_ToolData___ctor(uVar9,uVar10,uVar3,0);
    *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
  }
  return uVar9;
}

