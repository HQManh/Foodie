// rea decompile_all
// name: System.Reflection.MethodBase$$op_Equality
// address: 0x74e08a8
// body: available
// range: 0x74e08a8-0x74e0a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_MethodBase__op_Equality(long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09521594 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09188228);
    DAT_09521594 = 1;
  }
  if (param_1 == param_2) {
LAB_074e0a30:
    uVar3 = 1;
  }
  else {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_2 == (long *)0x0) {
      return 0;
    }
    lVar4 = *param_1;
    bVar1 = *(byte *)(DAT_09188228 + 0x130);
    if ((((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) == DAT_09188228)) &&
        (bVar1 <= *(byte *)(*param_2 + 0x130))) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == DAT_09188228)) {
LAB_074e0a18:
                    /* WARNING: Could not recover jumptable at 0x074e0a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar4 + 0x138))(param_1,param_2,*(undefined8 *)(lVar4 + 0x140));
      return uVar3;
    }
    if (*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_09182ac0 + 0x130)) {
      param_1 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09182ac0 + 0x130) * 8 + -8) !=
             DAT_09182ac0) {
      param_1 = (long *)0x0;
    }
    if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Reflection_ConstructorInfo__op_Inequality(param_1,0);
    if ((uVar2 & 1) != 0) {
      if (*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182ac0 + 0x130)) {
        param_2 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182ac0 + 0x130) * 8 + -8
                        ) != DAT_09182ac0) {
        param_2 = (long *)0x0;
      }
      if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Reflection_ConstructorInfo__op_Inequality(param_2,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_1 != param_2) {
          if (param_1 == (long *)0x0) {
            return 0;
          }
          if (param_2 == (long *)0x0) {
            return 0;
          }
          lVar4 = *param_1;
          goto LAB_074e0a18;
        }
        goto LAB_074e0a30;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

