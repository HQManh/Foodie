// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$GetOrCreateSlotFocus
// address: 0x40c5ef0
// body: available
// range: 0x40c5ef0-0x40c6227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c6214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c6218 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c6224 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ServeShelfController__GetOrCreateSlotFocus
               (undefined1 param_1 [16],float param_2,long param_3,uint param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((DAT_09515f91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc08);
    FUN_03f5c2a4(&DAT_091b4cc8);
    FUN_03f5c2a4(&DAT_091b4cd0);
    FUN_03f5c2a4(&DAT_091d4d48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f91 = 1;
  }
  plVar6 = (long *)(param_3 + 0xc0);
  lVar4 = *plVar6;
  if (lVar4 == 0) {
    uVar1 = FUN_03f5c394(DAT_0917fc08,*(undefined4 *)(param_3 + 0x78));
    *(undefined8 *)(param_3 + 0xc0) = uVar1;
    thunk_FUN_03f5d7b8(plVar6,uVar1);
    lVar4 = *(long *)(param_3 + 0xc0);
    if (lVar4 == 0) goto LAB_040c6214;
  }
  if (*(uint *)(lVar4 + 0x18) <= param_4) {
LAB_040c6218:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar7 = (long)(int)param_4;
  uVar1 = *(undefined8 *)(lVar4 + lVar7 * 8 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_05a8f088(DAT_091b4cd0);
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        lVar4 = *(long *)(DAT_091b4cc8 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_040c6214;
        uVar1 = TrungKienPack_Particle_PoolingParticle__PrefabOf(**(long **)(lVar4 + 0xb8),4,0);
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_3 + 0xb8);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
    lVar4 = 0;
    if ((uVar2 & 1) != 0) {
      fVar8 = (float)AnhPD_FoodOrder_ServeShelfController__get_Origin(param_3);
      fVar9 = *(float *)(param_3 + 0x70);
      fVar10 = *(float *)(param_3 + 0x74);
      if (DAT_09515ed5 == '\0') {
        FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
      uVar11 = *puVar5;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = FUN_04c3546c(fVar8 + ((float)(int)param_4 + 0.5) * fVar9,param_2 + fVar10 * 0.5,0,
                           uVar11,uVar12,uVar13,uVar14,uVar1,DAT_091d4d48);
      if (lVar4 != 0) {
        lVar3 = UnityEngine_Component__get_transform(lVar4,0);
        uVar1 = UnityEngine_Component__get_transform(param_3,0);
        if (lVar3 != 0) {
          UnityEngine_Transform__SetParent(lVar3,uVar1,1,0);
          lVar3 = UnityEngine_Component__get_gameObject(lVar4,0);
          if (lVar3 != 0) {
            UnityEngine_GameObject__SetActive(lVar3,1,0);
            plVar6 = (long *)*plVar6;
            if (plVar6 != (long *)0x0) {
              lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar6 + 0x40));
              if (lVar3 == 0) {
                uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar1,0);
              }
              if (param_4 < *(uint *)(plVar6 + 3)) {
                plVar6[lVar7 + 4] = lVar4;
                thunk_FUN_03f5d7b8(plVar6 + lVar7 + 4,lVar4);
                return lVar4;
              }
              goto LAB_040c6218;
            }
          }
        }
      }
      goto LAB_040c6214;
    }
  }
  else {
    lVar4 = *plVar6;
    if (lVar4 == 0) {
LAB_040c6214:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar4 + 0x18) <= param_4) goto LAB_040c6218;
    lVar4 = *(long *)(lVar4 + lVar7 * 8 + 0x20);
  }
  return lVar4;
}

