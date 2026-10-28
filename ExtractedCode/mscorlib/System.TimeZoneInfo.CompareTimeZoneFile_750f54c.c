// rea decompile_all
// name: System.TimeZoneInfo$$CompareTimeZoneFile
// address: 0x750f54c
// body: available
// range: 0x750f54c-0x750f7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750f768 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f76c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f770 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f794 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f79c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f7a4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f7a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0750f7a0) */

uint System_TimeZoneInfo__CompareTimeZoneFile(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  
  if ((DAT_095216dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09185a58);
    DAT_095216dd = 1;
  }
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_09184580);
  System_IO_FileStream___ctor(plVar4,param_1,3,1,1,1,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar13 = *(ulong *)(param_3 + 0x18);
  if (lVar5 == (int)uVar13) {
    if (0 < (int)uVar13) {
      uVar14 = 0;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = (**(code **)(*plVar4 + 0x368))
                          (plVar4,param_2,uVar14,uVar13 & 0xffffffff,
                           *(undefined8 *)(*plVar4 + 0x370));
        if (iVar3 == 0) {
          uVar7 = System_IO_Error__GetEndOfFile(0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091db720);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar8);
        }
        uVar15 = iVar3 + uVar14;
        uVar2 = uVar14;
        if ((int)uVar14 < (int)uVar15) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          pcVar9 = (char *)(param_3 + 0x20 + (long)(int)uVar14);
          pcVar10 = (char *)(param_2 + 0x20 + (long)(int)uVar14);
          uVar1 = uVar14;
          iVar12 = iVar3;
          if (uVar14 <= *(uint *)(param_2 + 0x18)) {
            uVar1 = *(uint *)(param_2 + 0x18);
          }
          do {
            if (uVar1 == uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(uint *)(param_3 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*pcVar10 != *pcVar9) {
              uVar14 = 1;
              goto LAB_0750f6dc;
            }
            iVar12 = iVar12 + -1;
            uVar14 = uVar14 + 1;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
            uVar2 = uVar15;
          } while (iVar12 != 0);
        }
        uVar14 = uVar2;
        uVar15 = (int)uVar13 - iVar3;
        uVar13 = (ulong)uVar15;
      } while (0 < (int)uVar15);
    }
    uVar14 = 1;
    uVar15 = 1;
  }
  else {
    uVar14 = 0;
LAB_0750f6dc:
    uVar15 = 0;
  }
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar13 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185a58) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0750f73c;
        }
        uVar13 = uVar13 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0750f73c:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return uVar14 & uVar15;
}

