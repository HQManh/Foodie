// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$DescribeGraphIds
// address: 0x43936e8
// body: available
// range: 0x43936e8-0x4393963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4393958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439395c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4393960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_InGame_LevelPlayLoadAndSetupControl__DescribeGraphIds(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined4 local_44;
  
  if ((DAT_09517a49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2858);
    FUN_03f5c2a4(&DAT_091a2860);
    FUN_03f5c2a4(&DAT_091a2868);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ac1f8);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f82d8);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_092145c8);
    DAT_09517a49 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uVar7 = DAT_091f82d8;
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x18), iVar2 != 0)) {
    lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0478(lVar5,iVar2,DAT_091b0568);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_88,*(long *)(param_1 + 0x10),DAT_091ac1f8);
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_60 = local_78;
    puStack_80 = &local_70;
    local_88 = 0;
    while (uVar6 = FUN_071bd28c(&local_70,DAT_091a2860), lVar4 = local_60, (uVar6 & 1) != 0) {
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_44 = *(undefined4 *)(local_60 + 0x34);
      uVar7 = FUN_03f5c42c(DAT_09535420,&local_44);
      uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x38),0);
      puVar1 = &DAT_091f8a38;
      if ((uVar6 & 1) == 0) {
        puVar1 = (undefined8 *)(lVar4 + 0x38);
      }
      uVar7 = System_String__Format(DAT_092145c8,uVar7,*puVar1,0);
      lVar4 = DAT_091b0570;
      if (lVar5 == 0) {
LAB_04393958:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_04393958;
      uVar3 = *(uint *)(lVar5 + 0x18);
      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = uVar7;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_071bd288(&local_70,DAT_091a2858);
    uVar7 = System_String__Join(DAT_091f5a98,lVar5,0);
  }
  return uVar7;
}

