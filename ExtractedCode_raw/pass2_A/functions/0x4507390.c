// rea decompile_all
// name: Utilities.GeometryUtilities$$CalculateIntersections
// address: 0x4507390
// body: available
// range: 0x4507390-0x450751b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4507514 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4507518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_GeometryUtilities__CalculateIntersections
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 local_68;
  
  if ((DAT_095184ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807e8);
    DAT_095184ea = 1;
  }
  local_68 = 0;
  lVar4 = FUN_03f5c394(DAT_091807e8,4);
  if (lVar4 == 0) {
LAB_04507518:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = *(uint *)(lVar4 + 0x18);
  if (uVar9 != 0) {
    *(float *)(lVar4 + 0x20) = -(param_1 * 0.5);
    *(float *)(lVar4 + 0x24) = -(param_2 * 0.5);
    if (uVar9 != 1) {
      *(float *)(lVar4 + 0x28) = param_1 * 0.5;
      *(float *)(lVar4 + 0x2c) = -(param_2 * 0.5);
      if (2 < uVar9) {
        *(float *)(lVar4 + 0x30) = param_1 * 0.5;
        *(float *)(lVar4 + 0x34) = param_2 * 0.5;
        if (uVar9 != 3) {
          *(float *)(lVar4 + 0x38) = -(param_1 * 0.5);
          *(float *)(lVar4 + 0x3c) = param_2 * 0.5;
          lVar5 = FUN_03f5c394(DAT_091807e8,2);
          uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
          if (0 < (int)*(uint *)(lVar4 + 0x18)) {
            uVar8 = 0;
            uVar9 = 0;
            puVar10 = (undefined4 *)(lVar4 + 0x24);
            do {
              if ((uVar7 & 0xffffffff) <= uVar8) goto LAB_04507514;
              uVar8 = uVar8 + 1;
              iVar3 = 0;
              uVar6 = (uint)uVar7;
              if (uVar6 != 0) {
                iVar3 = (int)uVar8 / (int)uVar6;
              }
              uVar2 = (int)uVar8 - iVar3 * uVar6;
              if (uVar6 <= uVar2) goto LAB_04507514;
              lVar1 = lVar4 + (long)(int)uVar2 * 8;
              uVar7 = Utilities_GeometryUtilities__IntersectLineSegments2D
                                (param_3,param_4,param_5,param_6,puVar10[-1],*puVar10,
                                 *(undefined4 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x24),
                                 &local_68);
              if ((uVar7 & 1) != 0) {
                if (lVar5 == 0) goto LAB_04507518;
                if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_04507514;
                lVar1 = (long)(int)uVar9;
                uVar9 = uVar9 + 1;
                *(undefined8 *)(lVar5 + lVar1 * 8 + 0x20) = local_68;
                if (1 < (int)uVar9) {
                  return lVar5;
                }
              }
              uVar7 = *(ulong *)(lVar4 + 0x18);
              puVar10 = puVar10 + 2;
            } while ((long)uVar8 < (long)(int)uVar7);
          }
          return 0;
        }
      }
    }
  }
LAB_04507514:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

