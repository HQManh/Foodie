// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyLevelMap$$BuildFrom
// address: 0x4352b00
// body: available
// range: 0x4352b00-0x4352cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4352cf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4352cf8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * CakeOrder_Home_Journey_JourneyLevelMap__BuildFrom(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int extraout_w1;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_095177bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3148);
    FUN_03f5c2a4(&DAT_091b3150);
    FUN_03f5c2a4(&DAT_09180b00);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177bf = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_1 != 0) {
    puVar3 = (undefined8 *)FUN_03f5c394(DAT_09180b00,*(undefined4 *)(param_1 + 0x18));
    if (0 < *(int *)(param_1 + 0x18)) {
      uVar7 = 0;
      iVar9 = 1;
      puVar1 = puVar3;
      do {
        puVar8 = puVar1 + 4;
        uVar4 = FUN_059539e4(param_1,uVar7 & 0xffffffff,DAT_091b3150);
        FUN_059539e4(param_1,uVar7 & 0xffffffff,DAT_091b3150);
        lVar5 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_04352cf4;
        uVar6 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(**(long **)(lVar5 + 0xb8),uVar4,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        CakeOrder_Home_Journey_JourneyLevelMap__CountLevelDesigns(uVar4);
        uStack_78 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        local_80 = uVar4;
        thunk_FUN_03f5d7b8(&local_80,uVar4);
        uStack_78 = CONCAT44(extraout_w1,(int)uVar7);
        uStack_70 = CONCAT44(iVar9 + extraout_w1 + -1,iVar9);
        uStack_68 = CONCAT35(uStack_68._5_3_,CONCAT14(uVar2,(undefined4)uStack_68)) &
                    0xffffff01ffffffff;
        if (puVar3 == (undefined8 *)0x0) goto LAB_04352cf4;
        if (*(uint *)(puVar3 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        puVar1[5] = uStack_78;
        *puVar8 = local_80;
        puVar1[7] = uStack_68;
        puVar1[6] = uStack_70;
        thunk_FUN_03f5d7b8(puVar8,0);
        uVar7 = uVar7 + 1;
        iVar9 = iVar9 + extraout_w1;
        puVar1 = puVar8;
      } while ((long)uVar7 < (long)*(int *)(param_1 + 0x18));
    }
    return puVar3;
  }
LAB_04352cf4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

