// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$TickOrbit
// address: 0x41e34d4
// body: available
// range: 0x41e34d4-0x41e38b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e389c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e38a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e38a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e38a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e38ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e38b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__TickOrbit(float param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  float local_48;
  float fStack_44;
  
  if ((DAT_09516aed & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091a4f88);
    FUN_03f5c2a4(&DAT_091a4f90);
    FUN_03f5c2a4(&DAT_091a4f98);
    FUN_03f5c2a4(&DAT_091b2130);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516aed = 1;
  }
  fVar5 = *(float *)(param_2 + 0xb0);
  fVar8 = *(float *)(param_2 + 0xb8);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  *(float *)(param_2 + 0xb0) = param_1;
  fVar6 = 0.0;
  if (fVar8 < param_1) {
    fVar9 = (param_1 - fVar8) / (*(float *)(param_2 + 0xbc) - fVar8);
    fVar8 = 1.0;
    if (fVar9 <= 1.0) {
      fVar8 = fVar9;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar9) {
      fVar6 = fVar8;
    }
  }
  fVar8 = 1.0;
  if (fVar6 * fVar6 <= 1.0) {
    fVar8 = fVar6 * fVar6;
  }
  *(float *)(param_2 + 0xb4) =
       *(float *)(param_2 + 0xb4) + (param_1 - fVar5) * (fVar8 * 880.0 + 220.0);
  if (*(long *)(param_2 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_c8,*(long *)(param_2 + 0xa0),DAT_091b2130);
  uStack_a8 = puStack_c0;
  local_b0 = local_c8;
  puStack_c0 = &local_b0;
  local_a0 = local_b8;
  local_c8 = 0;
  while( true ) {
    do {
      do {
        uVar2 = FUN_071bd28c(&local_b0,DAT_091a4f90);
        lVar1 = local_a0;
        if ((uVar2 & 1) == 0) {
          FUN_071bd288(&local_b0,DAT_091a4f88);
          return;
        }
        if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = *(undefined8 *)(local_a0 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
      } while (((uVar2 & 1) == 0) || (param_1 < *(float *)(lVar1 + 0x34)));
      fVar5 = param_1 - *(float *)(lVar1 + 0x38);
      fVar5 = fVar5 + fVar5;
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar5) {
        fVar8 = fVar6;
      }
      fVar6 = (float)DG_Tweening_DOVirtual__EasedValue(0,0x3f800000,fVar8,0x1a,0);
      fVar5 = *(float *)(param_2 + 0xb4);
      fVar9 = *(float *)(lVar1 + 0x30);
      if (*(int *)(DAT_09181918 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar10 = **(float **)(DAT_09181918 + 0xb8);
      fVar13 = (*(float **)(DAT_09181918 + 0xb8))[1];
      sincosf((fVar5 + fVar9) * 0.017453292,&fStack_44,&local_48);
      fVar9 = (param_1 - *(float *)(lVar1 + 0x34)) / 0.3;
      fVar5 = 1.0;
      if (fVar9 <= 1.0) {
        fVar5 = fVar9;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar9) {
        fVar11 = fVar5;
      }
      fVar10 = (1.0 - fVar6) * local_48 + fVar10;
      fVar13 = (1.0 - fVar6) * fStack_44 + fVar13;
      if (1.0 <= fVar11) {
        if (*(char *)(lVar1 + 0x3c) == '\0') {
          *(undefined1 *)(lVar1 + 0x3c) = 1;
          AnhPD_FoodOrder_GlobalAudio__Play(0x3f800000,2,0);
        }
      }
      else {
        fVar14 = *(float *)(lVar1 + 0x18);
        fVar9 = *(float *)(lVar1 + 0x1c);
        fVar5 = (float)DG_Tweening_DOVirtual__EasedValue(0,0x3f800000,fVar11,6,0);
        fVar6 = 1.0;
        if (fVar5 <= 1.0) {
          fVar6 = fVar5;
        }
        fVar7 = 0.0;
        if (0.0 <= fVar5) {
          fVar7 = fVar6;
        }
        fVar10 = fVar14 + (fVar10 - fVar14) * fVar7;
        fVar6 = sinf(fVar11 * 3.1415927);
        fVar13 = fVar6 * 1.25 + fVar9 + (fVar13 - fVar9) * fVar7;
      }
      if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar12 = *(undefined4 *)(lVar1 + 0x20);
      lVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(*(long *)(lVar1 + 0x10),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__set_position(fVar10,fVar13,uVar12,lVar3,0);
    } while (fVar8 <= 0.0);
    if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(*(long *)(lVar1 + 0x10),0);
    if (lVar3 == 0) break;
    fVar6 = 1.0 - fVar8 * fVar8 * fVar8;
    UnityEngine_Transform__set_localScale
              (fVar6 * *(float *)(lVar1 + 0x24),fVar6 * *(float *)(lVar1 + 0x28),
               fVar6 * *(float *)(lVar1 + 0x2c),lVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

