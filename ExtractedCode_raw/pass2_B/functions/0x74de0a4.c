// rea decompile_all
// name: System.Resources.ResourceSet$$GetCaseInsensitiveObjectInternal
// address: 0x74de0a4
// body: available
// range: 0x74de0a4-0x74de37b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74de324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74de378 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Resources_ResourceSet__GetCaseInsensitiveObjectInternal(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_09521586 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185048);
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09521586 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 == (long *)0x0) {
    uVar9 = thunk_FUN_03fc39d4(&DAT_091fd878);
    uVar9 = System_Environment__GetResourceString(uVar9,0);
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar2 = thunk_FUN_03f9944c();
    System_ObjectDisposedException___ctor(uVar2,0,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091d7d20);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar9);
  }
  plVar6 = (long *)(param_1 + 0x20);
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
LAB_074de2fc:
                    /* WARNING: Could not recover jumptable at 0x074de320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x308))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x310));
    return;
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517140 == '\0') {
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09517140 = '\x01';
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x18);
  plVar7 = (long *)thunk_FUN_03f9944c(DAT_09185048);
  System_Collections_Hashtable___ctor(plVar7,uVar9,0);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
  if (plVar8 == (long *)0x0) {
LAB_074de324:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  do {
    lVar3 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185b10) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_074de1fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_074de1fc:
    uVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      *plVar6 = (long)plVar7;
      thunk_FUN_03f5d7b8(plVar6,plVar7);
      if (plVar7 != (long *)0x0) goto LAB_074de2fc;
      goto LAB_074de324;
    }
    lVar3 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185a30) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_074de258;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a30,0);
LAB_074de258:
    uVar9 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    lVar3 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185a30) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_074de2b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a30,1);
LAB_074de2b8:
    uVar2 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    if (plVar7 == (long *)0x0) goto LAB_074de324;
    (**(code **)(*plVar7 + 0x2a8))(plVar7,uVar9,uVar2,*(undefined8 *)(*plVar7 + 0x2b0));
  } while( true );
}

