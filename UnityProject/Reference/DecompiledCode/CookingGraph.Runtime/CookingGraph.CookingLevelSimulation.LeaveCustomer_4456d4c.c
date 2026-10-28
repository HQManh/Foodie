// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$LeaveCustomer
// address: 0x4456d4c
// body: available
// range: 0x4456d4c-0x445717b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4457168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445716c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4457170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4457178 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04457174) */

void CookingGraph_CookingLevelSimulation__LeaveCustomer(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_09518021 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca800);
    FUN_03f5c2a4(&DAT_091cb600);
    FUN_03f5c2a4(&DAT_09179338);
    FUN_03f5c2a4(&DAT_09179348);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b24f0);
    FUN_03f5c2a4(&DAT_091e76f8);
    FUN_03f5c2a4(&DAT_091e7700);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518021 = 1;
  }
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (FUN_057e2274(*(long *)(param_1 + 0xa8),param_2,DAT_091b24f0), param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x198);
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x48) = 0;
    lVar5 = DAT_0918f298;
    *(int *)(param_1 + 0x198) = iVar1 + 1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = DAT_0918f298;
    }
    puVar4 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar4[0x50];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar10 = *puVar4;
      lVar9 = thunk_FUN_03f9944c(DAT_09179338);
      FUN_05322d94(lVar9,uVar10,DAT_091e76f8,0);
      lVar5 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar5 + 0x280) = lVar9;
      thunk_FUN_03f5d7b8(lVar5 + 0x280,lVar9);
    }
    uVar8 = FUN_04b0cafc(uVar8,lVar9,DAT_091cb600);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar5 = puVar4[0x51];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar10 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_09179348);
      FUN_053239c8(lVar5,uVar10,DAT_091e7700,0);
      lVar9 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar9 + 0x288) = lVar5;
      thunk_FUN_03f5d7b8(lVar9 + 0x288,lVar5);
    }
    plVar3 = (long *)FUN_04af6d6c(uVar8,lVar5,DAT_091ca800);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a5c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04456fdc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a5c0,0);
LAB_04456fdc:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      do {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04457060;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04457060:
        uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_04457124;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_0445710c;
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917ac88) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_044570c4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ac88,0);
LAB_044570c4:
        uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        CookingGraph_CookingLevelSimulation__AddDirty(param_1,param_2,uVar2);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0445710c:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04457140;
    }
  }
LAB_04457124:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_04457140:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

