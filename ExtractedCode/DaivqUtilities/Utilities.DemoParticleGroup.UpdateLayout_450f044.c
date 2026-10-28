// rea decompile_all
// name: Utilities.DemoParticleGroup$$UpdateLayout
// address: 0x450f044
// body: available
// range: 0x450f044-0x450f26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450f250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450f26c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DemoParticleGroup__UpdateLayout
               (undefined1 param_1 [16],ulong param_2,float param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  double __x;
  float fVar11;
  double local_48;
  
  if ((DAT_0951851c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c57a8);
    DAT_0951851c = 1;
  }
  lVar2 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar2 == 0) goto LAB_0450f250;
  lVar2 = FUN_04a6abf4(lVar2,DAT_091c57a8);
  plVar4 = (long *)(param_4 + 0x40);
  *plVar4 = lVar2;
  thunk_FUN_03f5d7b8(plVar4,lVar2);
  if (*(char *)(param_4 + 0x20) == '\0') {
    if (*plVar4 == 0) goto LAB_0450f250;
    iVar8 = *(int *)(*plVar4 + 0x18);
    if (DAT_09515cf4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515cf4 = '\x01';
    }
    fVar11 = SQRT((float)iVar8);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    __x = (double)fVar11;
    dVar10 = modf(__x,&local_48);
    if (0.0 <= fVar11) {
      if (dVar10 == 0.5) {
        dVar10 = 1.0;
        goto LAB_0450f164;
      }
      local_48 = (double)(long)(__x + 0.5);
    }
    else if (dVar10 == -0.5) {
      dVar10 = -1.0;
LAB_0450f164:
      if (((long)local_48 & 1U) != 0) {
        local_48 = local_48 + dVar10;
      }
    }
    else {
      local_48 = (double)(long)(__x + -0.5);
    }
    param_2 = 0;
    lVar2 = *plVar4;
    iVar8 = -0x80000000;
    if (local_48 != INFINITY) {
      iVar8 = (int)local_48;
    }
LAB_0450f1a8:
    if (lVar2 == 0) goto LAB_0450f250;
  }
  else {
    lVar2 = *(long *)(param_4 + 0x40);
    iVar8 = *(int *)(param_4 + 0x24);
    if (0 < *(int *)(param_4 + 0x24)) goto LAB_0450f1a8;
    if (lVar2 == 0) goto LAB_0450f250;
    iVar8 = *(int *)(lVar2 + 0x18);
  }
  lVar6 = 0;
  iVar7 = 0;
  while( true ) {
    fVar11 = (float)param_2;
    uVar5 = (uint)lVar6;
    if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar5) {
      return;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
    if (lVar2 == 0) break;
    lVar2 = UnityEngine_Component__get_transform(lVar2,0);
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if ((lVar3 == 0) || (fVar9 = (float)UnityEngine_Transform__get_position(lVar3,0), lVar2 == 0))
    break;
    iVar1 = 0;
    if (iVar8 != 0) {
      iVar1 = (int)uVar5 / iVar8;
    }
    param_3 = param_3 + 0.0;
    param_2 = (ulong)(uint)(fVar11 + *(float *)(param_4 + 0x2c) * (float)iVar7);
    UnityEngine_Transform__set_position
              (fVar9 + *(float *)(param_4 + 0x28) * (float)(int)(uVar5 - iVar1 * iVar8),param_2,
               param_3,lVar2,0);
    lVar6 = lVar6 + 1;
    iVar1 = 0;
    if (iVar8 != 0) {
      iVar1 = (int)lVar6 / iVar8;
    }
    lVar2 = *(long *)(param_4 + 0x40);
    if ((int)lVar6 == iVar1 * iVar8) {
      iVar7 = iVar7 + 1;
    }
    if (lVar2 == 0) break;
  }
LAB_0450f250:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

