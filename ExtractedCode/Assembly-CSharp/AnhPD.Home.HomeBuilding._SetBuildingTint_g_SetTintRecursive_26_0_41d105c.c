// rea decompile_all
// name: AnhPD.Home.HomeBuilding$$<SetBuildingTint>g__SetTintRecursive|26_0
// address: 0x41d105c
// body: available
// range: 0x41d105c-0x41d12ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d12e8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d12ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d12f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d12f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d12fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041d12f8) */

void AnhPD_Home_HomeBuilding__<SetBuildingTint>g__SetTintRecursive_26_0
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               float *param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  float fVar7;
  long local_38;
  
  if ((DAT_09516a38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5980);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918c010);
    DAT_09516a38 = 1;
  }
  local_38 = 0;
  if (param_5 != 0) {
    uVar1 = FUN_04a6b048(param_5,&local_38,DAT_091c5980);
    lVar5 = local_38;
    if ((uVar1 & 1) != 0) {
      if (local_38 == 0) goto LAB_041d12f4;
      fVar7 = (float)UnityEngine_SpriteRenderer__get_color(local_38,0);
      UnityEngine_SpriteRenderer__set_color
                (fVar7 * *param_6,param_2 * param_6[1],param_3 * param_6[2],param_4 * param_6[3],
                 lVar5,0);
    }
    plVar2 = (long *)UnityEngine_Transform__GetEnumerator(param_5,0);
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_041d11a4;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_041d11a4:
      uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar1 == 0) goto LAB_041d12a8;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_041d1290;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_041d120c;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_041d120c:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) !=
            DAT_0918c010)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
      }
      AnhPD_Home_HomeBuilding__<SetBuildingTint>g__SetTintRecursive_26_0(plVar4,param_6);
    } while( true );
  }
LAB_041d12f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar6 = piVar6 + 4;
    if (uVar1 == 0) break;
LAB_041d1290:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_041d12c4;
    }
  }
LAB_041d12a8:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_041d12c4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

