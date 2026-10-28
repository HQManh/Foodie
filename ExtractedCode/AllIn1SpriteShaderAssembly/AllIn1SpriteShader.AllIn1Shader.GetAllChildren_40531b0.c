// rea decompile_all
// name: AllIn1SpriteShader.AllIn1Shader$$GetAllChildren
// address: 0x40531b0
// body: available
// range: 0x40531b0-0x4053487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4053468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4053470 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4053474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4053478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405347c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4053484 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04053480) */

void AllIn1SpriteShader_AllIn1Shader__GetAllChildren(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_09515b1b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b1080);
    FUN_03f5c2a4(&DAT_0918c010);
    DAT_09515b1b = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = (long *)UnityEngine_Transform__GetEnumerator(param_2,0);
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_040532b0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_040532b0:
    uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_04053424;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_04053318;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_04053318:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar6 = DAT_091b1080;
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) !=
          DAT_0918c010)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
    }
    lVar5 = *param_3;
    if (lVar5 == 0) {
LAB_04053468:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_04053468;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = (long)plVar4;
      thunk_FUN_03f5d7b8(plVar8,plVar4);
    }
    else {
      FUN_057e0c68(lVar5,plVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    AllIn1SpriteShader_AllIn1Shader__GetAllChildren(param_1,plVar4,param_3);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04053440;
    }
  }
LAB_04053424:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_04053440:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

