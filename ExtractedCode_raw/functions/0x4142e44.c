// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$RollDonut
// address: 0x4142e44
// body: available
// range: 0x4142e44-0x41431cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41431c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41431cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CafePieceTable__RollDonut(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_095163dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4580);
    FUN_03f5c2a4(&DAT_091c4588);
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091798c8);
    FUN_03f5c2a4(&DAT_091ab9e0);
    FUN_03f5c2a4(&DAT_091ab9d0);
    FUN_03f5c2a4(&DAT_091aba00);
    FUN_03f5c2a4(&DAT_091aba08);
    FUN_03f5c2a4(&DAT_0917be38);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0917df60);
    FUN_03f5c2a4(&DAT_09213bd8);
    FUN_03f5c2a4(&DAT_09213be8);
    DAT_095163dd = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0917be38);
  FUN_0579924c(lVar4,DAT_091ab9d0);
  if (*(int *)(DAT_09182240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar11 = *(long *)(*(long *)(DAT_09182240 + 0xb8) + 0x48);
  if (lVar11 != 0) {
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar12 = 0;
      uVar7 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar3 = *(undefined4 *)(lVar11 + 0x20 + uVar12 * 4);
        uVar7 = AnhPD_FoodOrder_PieceLookup__ExistsSpawnable(uVar3,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(DAT_09182240 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = AnhPD_FoodOrder_CafePieceTable__ExcludedFromRandom(uVar3);
          lVar2 = DAT_091ab9e0;
          if ((uVar7 & 1) == 0) {
            if (lVar4 == 0) goto LAB_041431cc;
            lVar8 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_041431cc;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
            }
            else {
              FUN_05799adc(lVar4,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == 0) {
        uVar12 = AnhPD_FoodOrder_PieceLookup__get_HasConfig(0);
        puVar9 = &DAT_09213be8;
        if ((uVar12 & 1) == 0) {
          puVar9 = &DAT_09213bd8;
        }
        uVar5 = *puVar9;
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(uVar5,0);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uStack_78 = puVar9[1];
        local_80 = *puVar9;
        local_70 = puVar9[2];
      }
      else {
        uVar3 = UnityEngine_Random__Range(0,*(int *)(lVar4 + 0x18),0);
        uVar3 = FUN_057997e4(lVar4,uVar3,DAT_091aba08);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189158);
        }
        AnhPD_FoodOrder_PieceSet__One(&local_68,uVar3,0);
        if (*(int *)(DAT_09182240 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = *(undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x58);
        uVar5 = thunk_FUN_03f9944c(DAT_0917df60);
        FUN_05d777dc(uVar5,0,DAT_091c4580,0);
        uVar6 = thunk_FUN_03f9944c(DAT_091798c8);
        FUN_0533214c(uVar6,0,DAT_091c4588,0);
        local_90 = local_58;
        uStack_98 = uStack_60;
        local_a0 = local_68;
        AnhPD_FoodOrder_CafePieceTable__RollToppings(&local_80,&local_a0,uVar10,param_2,uVar5,uVar6)
        ;
      }
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[2] = local_70;
      return;
    }
  }
LAB_041431cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

