// rea decompile_all
// name: AnhPD.FoodOrder.StationHolderMultiType$$SyncStations
// address: 0x4118d18
// body: available
// range: 0x4118d18-0x4118d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationHolderMultiType__SyncStations(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((DAT_0951624d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5978);
    FUN_03f5c2a4(&DAT_091a5980);
    FUN_03f5c2a4(&DAT_091a5988);
    FUN_03f5c2a4(&DAT_091ac050);
    FUN_03f5c2a4(&DAT_091ac060);
    FUN_03f5c2a4(&DAT_091b3c50);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951624d = 1;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_057e185c(&uStack_78,*(long *)(param_1 + 0x38),DAT_091b3c50);
      lStack_50 = lStack_68;
      uStack_58 = puStack_70;
      uStack_60 = uStack_78;
      uStack_78 = 0;
      puStack_70 = &uStack_60;
      while( true ) {
        do {
          uVar4 = FUN_071bd28c(&uStack_60,DAT_091a5980);
          lVar6 = lStack_50;
          if ((uVar4 & 1) == 0) {
            FUN_071bd288(&uStack_60,DAT_091a5978);
            return;
          }
          if (lStack_50 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lStack_50 + 0x10);
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
          lVar3 = DAT_091ac050;
        } while ((uVar4 & 1) == 0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(param_1 + 0x28);
        if (lVar5 == 0) break;
        lVar7 = *(long *)(lVar5 + 0x10);
        uVar9 = *(undefined8 *)(lVar6 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *puVar8 = uVar9;
          thunk_FUN_03f5d7b8(puVar8);
        }
        else {
          FUN_057e0c68(lVar5,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

