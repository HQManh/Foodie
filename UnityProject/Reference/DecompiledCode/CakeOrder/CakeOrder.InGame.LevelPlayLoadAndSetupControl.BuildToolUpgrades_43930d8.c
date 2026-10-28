// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$BuildToolUpgrades
// address: 0x43930d8
// body: available
// range: 0x43930d8-0x43933b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43933ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43933b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__BuildToolUpgrades
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09517a47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0008);
    FUN_03f5c2a4(&DAT_091a0000);
    FUN_03f5c2a4(&DAT_091a0018);
    FUN_03f5c2a4(&DAT_09176c60);
    FUN_03f5c2a4(&DAT_091a4580);
    FUN_03f5c2a4(&DAT_091a4588);
    FUN_03f5c2a4(&DAT_091a4590);
    FUN_03f5c2a4(&DAT_091a86d0);
    FUN_03f5c2a4(&DAT_091a86e0);
    FUN_03f5c2a4(&DAT_091a86a0);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517a47 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + 0x70);
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_03f9944c(DAT_09176c60);
      FUN_06fec3dc(lVar5,DAT_091a0000);
      *plVar6 = lVar5;
      thunk_FUN_03f5d7b8(plVar6,lVar5);
      if (lVar5 == 0) goto LAB_043933b0;
    }
    FUN_06fed328(lVar5,DAT_091a0008);
    if (param_2 != 0) {
      uVar2 = CakeOrder_MapToolConfig__EnumerateToolIds(param_2,0);
      lVar3 = thunk_FUN_03f9944c(DAT_09179ee0);
      FUN_053eb620(lVar3,uVar2,DAT_091a86a0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(param_4,0);
      if ((uVar4 & 1) == 0) {
        if (lVar3 == 0) goto LAB_043933b0;
      }
      else {
        if ((param_4 == 0) ||
           (uVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetSavedToolIds
                              (param_4,param_3,0), lVar3 == 0)) goto LAB_043933b0;
        FUN_053ec73c(lVar3,uVar2,DAT_091a86e0);
      }
      FUN_053ec0b0(&local_88,lVar3,DAT_091a86d0);
      local_60 = local_78;
      uStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      do {
        do {
          uVar4 = FUN_071bb7b4(&local_70,DAT_091a4588);
          uVar2 = local_60;
          if ((uVar4 & 1) == 0) {
            FUN_071bb7b0(&local_70,DAT_091a4580);
            return;
          }
          uVar4 = System_String__IsNullOrEmpty(local_60,0);
        } while ((uVar4 & 1) != 0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(param_4,0);
        if ((uVar4 & 1) == 0) {
          iVar1 = 0;
        }
        else {
          if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetToolLevel
                            (param_4,param_3,uVar2,0);
        }
        auVar7 = CakeOrder_MapToolConfig__GetUpgradeStat(param_2,uVar2,iVar1 + 1,0);
        FUN_06fed164(lVar5,uVar2,auVar7._0_8_,auVar7._8_8_ & 0xffffffff,DAT_091a0018);
      } while( true );
    }
  }
LAB_043933b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

