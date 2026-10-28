// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$Parse
// address: 0x4426644
// body: available
// range: 0x4426644-0x4426cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4426be4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4426be8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4426c30 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4426c38 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4426c60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4426cb0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04426b4c) */
/* WARNING: Removing unreachable block (ram,0x04426c34) */

long CookingGraph_CustomerOrderTranslator__Parse(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09517f53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca928);
    FUN_03f5c2a4(&DAT_091ca3e8);
    FUN_03f5c2a4(&DAT_091cb478);
    FUN_03f5c2a4(&DAT_09178790);
    FUN_03f5c2a4(&DAT_09178800);
    FUN_03f5c2a4(&DAT_09178810);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a660);
    FUN_03f5c2a4(&DAT_0917ad40);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b330);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e83f0);
    FUN_03f5c2a4(&DAT_091e83f8);
    FUN_03f5c2a4(&DAT_091e8400);
    FUN_03f5c2a4(&DAT_0918f998);
    DAT_09517f53 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_0921c7b8);
    System_ArgumentNullException___ctor(uVar7,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091c6ff0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar9);
  }
  lVar3 = CookingGraph_CustomerOrderTranslator__Parse(param_1,param_3);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x10);
    if (*(int *)(DAT_0918f998 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_0918f998 + 0xb8);
    lVar8 = puVar5[1];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f998 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_0918f998 + 0xb8);
      }
      uVar9 = *puVar5;
      lVar8 = thunk_FUN_03f9944c(DAT_09178790);
      FUN_05324070(lVar8,uVar9,DAT_091e83f0,0);
      plVar4 = (long *)(*(long *)(DAT_0918f998 + 0xb8) + 8);
      *plVar4 = lVar8;
      thunk_FUN_03f5d7b8(plVar4,lVar8);
    }
    uVar7 = FUN_04afac50(uVar7,lVar8,DAT_091ca928);
    if (*(int *)(DAT_0918f998 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f998);
    }
    puVar5 = *(undefined8 **)(DAT_0918f998 + 0xb8);
    lVar8 = puVar5[2];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f998 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f998);
        puVar5 = *(undefined8 **)(DAT_0918f998 + 0xb8);
      }
      uVar9 = *puVar5;
      lVar8 = thunk_FUN_03f9944c(DAT_09178800);
      FUN_05322d94(lVar8,uVar9,DAT_091e83f8,0);
      plVar4 = (long *)(*(long *)(DAT_0918f998 + 0xb8) + 0x10);
      *plVar4 = lVar8;
      thunk_FUN_03f5d7b8(plVar4,lVar8);
    }
    uVar7 = FUN_04b0cafc(uVar7,lVar8,DAT_091cb478);
    if (*(int *)(DAT_0918f998 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f998);
    }
    puVar5 = *(undefined8 **)(DAT_0918f998 + 0xb8);
    lVar8 = puVar5[3];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f998 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f998);
        puVar5 = *(undefined8 **)(DAT_0918f998 + 0xb8);
      }
      uVar9 = *puVar5;
      lVar8 = thunk_FUN_03f9944c(DAT_09178810);
      FUN_05324070(lVar8,uVar9,DAT_091e8400,0);
      plVar4 = (long *)(*(long *)(DAT_0918f998 + 0xb8) + 0x18);
      *plVar4 = lVar8;
      thunk_FUN_03f5d7b8(plVar4,lVar8);
    }
    plVar4 = (long *)FUN_04af8044(uVar7,lVar8,DAT_091ca3e8);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a660) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_044269b0;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a660,0);
LAB_044269b0:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_04426a44;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_04426a44:
        uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar2 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_04426b40;
          lVar8 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar2 == 0) goto LAB_04426b18;
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_04426b00;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917ad40) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_04426aa8;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ad40,0);
LAB_04426aa8:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        lVar8 = param_1;
        if (param_1 == 0) {
          lVar8 = **(long **)(DAT_09535468 + 0xb8);
        }
        CookingGraph_CustomerOrderTranslator__ResolveAssets(uVar7,param_2,lVar8);
      } while( true );
    }
  }
  goto LAB_04426c60;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_04426b00:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04426b34;
    }
  }
LAB_04426b18:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_04426b34:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_04426b40:
  plVar4 = (long *)CookingGraph_CustomerOrderTranslator__ValidateGroupQuantities(lVar3,param_2);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b330) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04426bb0;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b330,0);
LAB_04426bb0:
    iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar1 < 1) {
      return lVar3;
    }
    uVar7 = thunk_FUN_03fc39d4(&DAT_0917b4c8);
    lVar3 = FUN_039b0dd4(0,uVar7,plVar4,0);
    if (lVar3 != 0) {
      uVar7 = *(undefined8 *)(lVar3 + 0x30);
      if (param_1 == 0) {
        param_1 = **(long **)(DAT_09535468 + 0xb8);
      }
      thunk_FUN_03fc39d4(&DAT_09182d98);
      uVar9 = thunk_FUN_03f9944c();
      CookingGraph_CookingGraphFormatException___ctor(uVar9,uVar7,0,param_1);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091c6ff0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,uVar7);
    }
  }
LAB_04426c60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

