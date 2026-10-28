// rea decompile_all
// name: CakeOrder.Home.HomeMapNpcSpawnControl$$SetUp
// address: 0x432dbf0
// body: available
// range: 0x432dbf0-0x432df6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432deec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x432df60 to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x432df64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432df68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeMapNpcSpawnControl__SetUp
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_095176bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174848);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cea68);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091d4dc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213d50);
    FUN_03f5c2a4(&DAT_091f7560);
    DAT_095176bc = 1;
  }
  if (((param_7 == 0) || (*(long *)(param_7 + 0x18) == 0)) ||
     (lVar4 = CakeOrder_Home_HomeMapNpcSpawnControl__GetMapSpawnScenario(param_5,param_6),
     lVar4 == 0)) {
    return;
  }
  *(undefined8 *)(param_5 + 0x40) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x40),param_6);
  lVar5 = *(long *)(DAT_091b4a58 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    iVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetCountDayFinishedInMap
                      (**(long **)(lVar5 + 0xb8),param_6,0);
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if ((int)uVar1 < 1) {
        return;
      }
      uVar9 = 0;
LAB_0432dd2c:
      if (uVar1 <= uVar9) {
LAB_0432df68:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_0432df64;
      if (*(int *)(lVar5 + 0x10) <= iVar2 + 1) {
        uVar6 = CakeOrder_Home_HomeMapNpcSpawnControl__GetKeyClaimedReward(param_6);
        iVar3 = UnityEngine_PlayerPrefs__GetInt(uVar6,0,0);
        if (iVar3 != 1) {
          uVar6 = *(undefined8 *)(param_5 + 0x28);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar6,0,0);
          if (((uVar7 & 1) != 0) || (*(long *)(param_7 + 0x18) == 0)) {
            uVar6 = System_String__Concat(DAT_09213d50,param_6,DAT_091f7560,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogWarning(uVar6,param_5,0);
            return;
          }
          *(long *)(param_5 + 0x30) = lVar5;
          thunk_FUN_03f5d7b8((long *)(param_5 + 0x30),lVar5);
          if (*(int *)(param_7 + 0x18) == 0) goto LAB_0432df68;
          if (*(long *)(param_7 + 0x20) == 0) goto LAB_0432df64;
          uVar6 = *(undefined8 *)(param_5 + 0x28);
          uVar10 = UnityEngine_Transform__get_position(*(long *)(param_7 + 0x20),0);
          uVar12 = param_2;
          uVar13 = param_3;
          uVar11 = FUN_041ca738(0);
          if (*(int *)(param_7 + 0x18) != 0) {
            uVar8 = *(undefined8 *)(param_7 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar4 = FUN_04c35708(uVar10,param_2,param_3,uVar11,uVar12,uVar13,param_4,uVar6,uVar8,
                                 DAT_091d4dc8);
            if (lVar4 != 0) {
              CakeOrder_Home_NpcHomeControl__SetUpOnSpawn(lVar4,0);
              uVar6 = thunk_FUN_03f9944c(DAT_09174848);
              FUN_070a8c30(uVar6,param_5,DAT_091cea68,0);
              CakeOrder_Home_NpcHomeControl__add_onClick(lVar4,uVar6);
              *(long *)(param_5 + 0x38) = lVar4;
              thunk_FUN_03f5d7b8((long *)(param_5 + 0x38),lVar4);
              return;
            }
            goto LAB_0432df64;
          }
          goto LAB_0432df68;
        }
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      uVar9 = uVar9 + 1;
      if ((int)uVar1 <= (int)uVar9) {
        return;
      }
      goto LAB_0432dd2c;
    }
  }
LAB_0432df64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

