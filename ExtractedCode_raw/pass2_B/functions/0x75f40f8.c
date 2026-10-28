// rea decompile_all
// name: System.RuntimeType$$GetBaseType
// address: 0x75f40f8
// body: available
// range: 0x75f40f8-0x75f40fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_RuntimeType__GetBaseType(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  
  if ((DAT_09521f4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f4d = 1;
  }
  uVar2 = System_Type__get_IsInterface(param_1,0);
  plVar4 = (long *)0x0;
  if ((uVar2 & 1) == 0) {
    uVar2 = thunk_FUN_03f6c7b8(param_1,0);
    if ((uVar2 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_03f6f95c(param_1,0);
      return plVar4;
    }
    lVar3 = (**(code **)(*param_1 + 0x4b8))(param_1,*(undefined8 *)(*param_1 + 0x4c0));
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a400);
    }
    if (lVar3 == 0) {
LAB_075f42d4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    plVar4 = *(long **)(*(long *)(DAT_0918a400 + 0xb8) + 0x10);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5 = *(long **)(lVar3 + (long)(int)uVar6 * 8 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_075f42d4;
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
        uVar2 = System_Type__get_IsInterface(plVar5,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
          if ((uVar2 & 1) != 0) {
            uVar2 = (**(code **)(*plVar5 + 0x4a8))(plVar5,*(undefined8 *)(*plVar5 + 0x4b0));
            if ((uVar2 & 0xc) == 0) goto LAB_075f4230;
          }
          plVar4 = plVar5;
        }
LAB_075f4230:
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar4 == *(long **)(*(long *)(DAT_0918a400 + 0xb8) + 0x10)) {
      uVar1 = (**(code **)(*param_1 + 0x4a8))(param_1,*(undefined8 *)(*param_1 + 0x4b0));
      if ((uVar1 >> 3 & 1) != 0) {
        if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)**(undefined8 **)(DAT_0918a400 + 0xb8);
      }
    }
  }
  return plVar4;
}

