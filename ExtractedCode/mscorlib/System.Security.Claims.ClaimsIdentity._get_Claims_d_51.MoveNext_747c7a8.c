// rea decompile_all
// name: System.Security.Claims.ClaimsIdentity.<get_Claims>d__51$$MoveNext
// address: 0x747c7a8
// body: available
// range: 0x747c7a8-0x747c8f7 inclusive
// range: 0x747c908-0x747cb2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747c8ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c8f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c8f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747cb14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747cb18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747cb1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747cb20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747cb24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747cb28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Security_Claims_ClaimsIdentity_<get_Claims>d__51__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  
  if ((DAT_09521247 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b430);
    FUN_03f5c2a4(&DAT_0919b438);
    FUN_03f5c2a4(&DAT_0917a3a8);
    FUN_03f5c2a4(&DAT_0917aa50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ab9b8);
    FUN_03f5c2a4(&DAT_091ab9c0);
    DAT_09521247 = 1;
  }
  iVar9 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x28);
  if (iVar9 == 2) goto LAB_0747c9dc;
  if (iVar9 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar9 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar9;
  }
  else {
    if (iVar9 != 0) {
      return 0;
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = *(long *)(lVar10 + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar2 + 0x18) <= iVar9) {
    if (*(long *)(lVar10 + 0x20) == 0) {
      return 0;
    }
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    do {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = FUN_06c773c8(*(long *)(lVar10 + 0x20),DAT_0919b430);
      if (iVar1 <= iVar9) {
        return 0;
      }
      if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = FUN_06c7745c(*(long *)(lVar10 + 0x20),*(undefined4 *)(param_1 + 0x30),DAT_0919b438);
      if (lVar2 != 0) {
        if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar4 = (long *)FUN_06c7745c(*(long *)(lVar10 + 0x20),*(undefined4 *)(param_1 + 0x30),
                                      DAT_0919b438);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917a3a8) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0747c9bc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a3a8,0);
LAB_0747c9bc:
        uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        *(undefined8 *)(param_1 + 0x38) = uVar3;
        thunk_FUN_03f5d7b8();
LAB_0747c9dc:
        plVar4 = *(long **)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0747ca38;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0747ca38:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar7 & 1) != 0) {
          plVar4 = *(long **)(param_1 + 0x38);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 == 0) goto LAB_0747cad4;
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0747cabc;
        }
        System_Security_Claims_ClaimsIdentity_<get_Claims>d__51__<>m__Finally1();
        *(undefined8 *)(param_1 + 0x38) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),0);
      }
      iVar9 = *(int *)(param_1 + 0x30) + 1;
      *(int *)(param_1 + 0x30) = iVar9;
    } while( true );
  }
  uVar3 = FUN_057e0998(lVar2,iVar9,DAT_091ab9c0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_03f5d7b8();
  uVar6 = 1;
  goto LAB_0747c910;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0747cabc:
    if (*(long *)(piVar8 + -2) == DAT_0917aa50) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0747caf0;
    }
  }
LAB_0747cad4:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917aa50,0);
LAB_0747caf0:
  uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_03f5d7b8();
  uVar6 = 2;
LAB_0747c910:
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return 1;
}

