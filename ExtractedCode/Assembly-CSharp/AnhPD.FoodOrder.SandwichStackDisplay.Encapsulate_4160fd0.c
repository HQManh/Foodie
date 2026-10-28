// rea decompile_all
// name: AnhPD.FoodOrder.SandwichStackDisplay$$Encapsulate
// address: 0x4160fd0
// body: available
// range: 0x4160fd0-0x4161213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4161210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichStackDisplay__Encapsulate(char *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  ulong uVar7;
  float fVar9;
  float fVar11;
  ulong uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined8 local_88 [3];
  undefined8 local_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  if ((DAT_09516531 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6a70);
    FUN_03f5c2a4(&DAT_091b6a80);
    FUN_03f5c2a4(&DAT_091b6a88);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516531 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) != 0) {
    if ((param_2 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(param_2,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*param_1 == '\0') {
        UnityEngine_Renderer__get_bounds(local_88,param_2,0);
        fStack_68 = (float)local_88[1];
        fStack_64 = (float)((ulong)local_88[1] >> 0x20);
        local_70 = local_88[0];
        fStack_60 = (float)local_88[2];
        fStack_5c = (float)((ulong)local_88[2] >> 0x20);
      }
      else {
        FUN_05c2951c(&local_a8,param_1,DAT_091b6a88);
        fVar5 = fStack_98;
        fVar4 = fStack_9c;
        uVar1 = local_a8;
        fVar14 = fStack_a0 - fStack_94;
        fVar15 = fStack_a0 + fStack_94;
        UnityEngine_Renderer__get_bounds(&local_a8,param_2,0);
        fVar12 = (float)uVar1;
        fVar6 = fVar12 - fVar4;
        fVar13 = (float)((ulong)uVar1 >> 0x20);
        fVar8 = fVar13 - fVar5;
        uVar7 = CONCAT44(fVar8,fVar6);
        fVar12 = fVar12 + fVar4;
        fVar13 = fVar13 + fVar5;
        fVar5 = fStack_a0 - fStack_94;
        fStack_a0 = fStack_a0 + fStack_94;
        fVar9 = (float)local_a8 - fStack_9c;
        fVar4 = (float)((ulong)local_a8 >> 0x20);
        fVar11 = fVar4 - fStack_98;
        uVar10 = CONCAT44(fVar11,fVar9);
        fStack_9c = (float)local_a8 + fStack_9c;
        fVar4 = fVar4 + fStack_98;
        uVar2 = CONCAT44(fVar4,fStack_9c);
        if (fVar5 <= fVar14) {
          fVar14 = fVar5;
        }
        uVar7 = uVar7 ^ (uVar7 ^ uVar10) & ~CONCAT44(-(uint)(fVar8 < fVar11),-(uint)(fVar6 < fVar9))
        ;
        uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar13,fVar12)) &
                          CONCAT44(-(uint)(fVar11 < fVar13),-(uint)(fVar9 < fVar12));
        if (fVar15 <= fVar5) {
          fVar15 = fVar5;
        }
        fVar8 = (float)uVar7;
        fVar11 = (float)(uVar7 >> 0x20);
        fVar9 = ((float)uVar10 - fVar8) * 0.5;
        fVar12 = ((float)(uVar10 >> 0x20) - fVar11) * 0.5;
        fVar5 = (fVar15 - fVar14) * 0.5;
        fVar8 = fVar8 + fVar9;
        fVar11 = fVar11 + fVar12;
        fVar15 = fVar8 - fVar9;
        fVar6 = fVar11 - fVar12;
        uVar7 = CONCAT44(fVar6,fVar15);
        fVar9 = fVar9 + fVar8;
        fVar12 = fVar12 + fVar11;
        fStack_68 = (fVar14 + fVar5) - fVar5;
        fVar5 = fVar5 + fVar14 + fVar5;
        if (fStack_a0 <= fStack_68) {
          fStack_68 = fStack_a0;
        }
        uVar7 = uVar7 ^ (uVar7 ^ uVar2) &
                        ~CONCAT44(-(uint)(fVar6 < fVar4),-(uint)(fVar15 < fStack_9c));
        uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(fVar12,fVar9)) &
                        CONCAT44(-(uint)(fVar4 < fVar12),-(uint)(fStack_9c < fVar9));
        if (fVar5 <= fStack_a0) {
          fVar5 = fStack_a0;
        }
        fVar4 = (float)uVar7;
        fVar15 = (float)(uVar7 >> 0x20);
        fStack_64 = ((float)uVar2 - fVar4) * 0.5;
        fStack_60 = ((float)(uVar2 >> 0x20) - fVar15) * 0.5;
        fStack_5c = (fVar5 - fStack_68) * 0.5;
        local_70 = CONCAT44(fVar15 + fStack_60,fVar4 + fStack_64);
        fStack_68 = fStack_68 + fStack_5c;
      }
      uStack_90 = 0;
      fStack_94 = 0.0;
      fStack_98 = 0.0;
      fStack_9c = 0.0;
      fStack_a0 = 0.0;
      local_a8 = 0;
      FUN_05c294f8(&local_a8,&local_70,DAT_091b6a70);
      *(ulong *)(param_1 + 8) = CONCAT44(fStack_9c,fStack_a0);
      *(undefined8 *)param_1 = local_a8;
      *(ulong *)(param_1 + 0x14) = CONCAT44(uStack_90,fStack_94);
      *(ulong *)(param_1 + 0xc) = CONCAT44(fStack_98,fStack_9c);
    }
  }
  return;
}

