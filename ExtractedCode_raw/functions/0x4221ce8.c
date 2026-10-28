// rea decompile_all
// name: AnhPD.FoodOrder.HorizontalColliderLayout$$DoLayout
// address: 0x4221ce8
// body: available
// range: 0x4221ce8-0x422216b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4221f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222148 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422214c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422215c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222168 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04222164) */

void AnhPD_FoodOrder_HorizontalColliderLayout__DoLayout
               (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  long *local_60;
  long *local_58;
  
  if ((DAT_09516d30 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4958);
    FUN_03f5c2a4(&DAT_091a4960);
    FUN_03f5c2a4(&DAT_091a4968);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b1080);
    FUN_03f5c2a4(&DAT_091b1090);
    FUN_03f5c2a4(&DAT_091b1070);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_0917cea8);
    FUN_03f5c2a4(&DAT_0918c010);
    DAT_09516d30 = 1;
  }
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917cea8);
  FUN_057e0400(lVar3,DAT_091b1070);
  lVar4 = UnityEngine_Component__get_transform(param_3,0);
  if (lVar4 != 0) {
    plVar5 = (long *)UnityEngine_Transform__GetEnumerator(lVar4,0);
joined_r0x04221dfc:
    do {
      local_58 = plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04221e68;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_04221e68:
      uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      plVar5 = local_58;
      if ((uVar9 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_03f99350(local_58,DAT_09185a58);
        local_60 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0422201c;
        lVar4 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 == 0) goto LAB_04221ff4;
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04221fdc;
      }
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *local_58;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_04221ed0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,1);
LAB_04221ed0:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) !=
          DAT_0918c010)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar7);
      }
      lVar4 = UnityEngine_Component__get_gameObject(plVar7,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
      lVar4 = DAT_091b1080;
      plVar5 = local_58;
    } while ((uVar9 & 1) == 0);
    if (lVar3 != 0) {
      lVar8 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          plVar5 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar5 = (long)plVar7;
          thunk_FUN_03f5d7b8(plVar5,plVar7);
          plVar5 = local_58;
        }
        else {
          FUN_057e0c68(lVar3,plVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          plVar5 = local_58;
        }
        goto joined_r0x04221dfc;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_04222160;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_04221fdc:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04222010;
    }
  }
LAB_04221ff4:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_04222010:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0422201c:
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 == 0) {
      return;
    }
    fVar15 = *(float *)(param_3 + 0x2c);
    lVar4 = UnityEngine_Component__get_transform(param_3,0);
    if (lVar4 != 0) {
      fVar11 = (float)UnityEngine_Transform__get_position(lVar4,0);
      if (*(long *)(param_3 + 0x20) != 0) {
        fVar14 = param_2;
        fVar12 = (float)UnityEngine_Collider2D__get_offset(*(long *)(param_3 + 0x20),0);
        if (*(long *)(param_3 + 0x20) != 0) {
          fVar13 = (float)UnityEngine_BoxCollider2D__get_size(*(long *)(param_3 + 0x20),0);
          if (*(char *)(param_3 + 0x28) != '\0') {
            fVar13 = fVar15 * (float)iVar1 - fVar15;
          }
          fVar15 = *(float *)(param_3 + 0x30) + fVar11 + fVar12 + fVar13 * -0.5;
          FUN_057e185c(&local_78,lVar3,DAT_091b1090);
          while( true ) {
            uVar9 = FUN_071bd28c(&local_78,DAT_091a4960);
            lVar3 = local_68;
            if ((uVar9 & 1) == 0) {
              FUN_071bd288(&local_78,DAT_091a4958);
              return;
            }
            if (local_68 == 0) break;
            UnityEngine_Transform__get_position(local_68,0);
            UnityEngine_Transform__set_position(fVar15,param_2 + fVar14,lVar3,0);
            fVar15 = fVar15 + *(float *)(param_3 + 0x2c);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
LAB_04222160:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

