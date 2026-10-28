// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScale$$OnSetup
// address: 0x4312b8c
// body: available
// range: 0x4312b8c-0x4312e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4312e14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4312e18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] CakeOrder_Home_HomeBuildingFadeScale__OnSetup(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  if ((DAT_095175d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_091ce8e0);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095175d3 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  local_38 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_04312e18;
    CakeOrder_Home_HomeMapNpcSpawnControl__SetUp
              (*(long *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0xa0),0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x78);
    uVar1 = CakeOrder_Home_HomeBuildingFadeScale__get_IsLocked(param_1);
    if (lVar5 == 0) goto LAB_04312e18;
    UnityEngine_GameObject__SetActive(lVar5,uVar1 & 1,0);
    uVar2 = FUN_05a8eda4(DAT_091b4a60);
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(DAT_091b4a58 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      uVar4 = thunk_FUN_03f9944c(DAT_09174980);
      FUN_070a8c30(uVar4,param_1,DAT_091ce8e0,0);
      if (lVar5 == 0) goto LAB_04312e18;
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onMapBuildingUnlocked
                (lVar5,uVar4,0);
    }
  }
  lVar5 = *(long *)(param_1 + 0x70);
  if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
    uVar2 = 0;
    uVar3 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(lVar5 + 0x20 + uVar2 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar6,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar6 == 0) goto LAB_04312e18;
        CakeOrder_Home_HomeBuildingFadeScaleBaseVariant__SetParticleAppear
                  (lVar6,*(undefined8 *)(param_1 + 0x90));
        CakeOrder_Home_HomeBuildingFadeScaleBaseVariant__Deactivate(lVar6);
      }
      uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x90) == 0) {
LAB_04312e18:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = UnityEngine_ParticleSystem__get_main(*(long *)(param_1 + 0x90),0);
    UnityEngine_ParticleSystem_MainModule__set_scalingMode(&local_38,0,0);
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return *(undefined1 (*) [16])(*(long *)(DAT_0918c610 + 0xb8) + 0x10);
}

