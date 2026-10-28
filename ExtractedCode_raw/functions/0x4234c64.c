// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$ReadRescuePlan
// address: 0x4234c64
// body: available
// range: 0x4234c64-0x4234f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4234f1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4234f20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4234f24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__ReadRescuePlan(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_09516ddc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a33c8);
    FUN_03f5c2a4(&DAT_091a33d0);
    FUN_03f5c2a4(&DAT_091a33d8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091adaf8);
    FUN_03f5c2a4(&DAT_091adb00);
    FUN_03f5c2a4(&DAT_091b05f0);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091f5a98);
    DAT_09516ddc = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (param_2 != 0) {
    if ((*(long *)(param_2 + 0x110) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_2 + 0x110) + 0x18), lVar5 == 0)) {
      lVar5 = *(long *)(param_1 + 0x110);
      if (lVar5 == 0) goto LAB_04234f24;
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
    }
    else {
      AnhPD_FoodOrder_LevelPieceBook__CollectRawToFinishOpenOrders
                (lVar5,*(undefined8 *)(param_1 + 0x110),0);
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x110) + 0x18);
      lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0478(lVar5,uVar2,DAT_091b0568);
      if (*(long *)(param_1 + 0x110) != 0) {
        FUN_057e185c(&local_78,*(long *)(param_1 + 0x110),DAT_091adb00);
        local_50 = local_68;
        puStack_58 = puStack_70;
        local_60 = local_78;
        local_78 = 0;
        puStack_70 = &local_60;
        while (uVar6 = FUN_071bd28c(&local_60,DAT_091a33d0), lVar4 = DAT_091b0570, (uVar6 & 1) != 0)
        {
          if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar5 == 0) {
LAB_04234f1c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar5 + 0x10);
          uVar7 = *(undefined8 *)(local_50 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_04234f1c;
          uVar3 = *(uint *)(lVar5 + 0x18);
          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = uVar7;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar5,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071bd288(&local_60,DAT_091a33c8);
        if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09516ea3 == '\0') {
          FUN_03f5c2a4(&DAT_0918b378);
          DAT_09516ea3 = '\x01';
        }
        if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar5 != 0) {
          FUN_057e2748(lVar5,*(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10),DAT_091b05f0);
          System_String__Join(DAT_091f5a98,lVar5,0);
          return;
        }
      }
    }
  }
LAB_04234f24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

