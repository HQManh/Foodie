// rea decompile_all
// name: Lofelt.NiceVibrations.HapticPatterns.Pattern$$ToClip
// address: 0x7366f78
// body: available
// range: 0x7366f78-0x73672b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7367240 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73672b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Lofelt_NiceVibrations_HapticPatterns_Pattern__ToClip(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float local_74;
  
  if ((DAT_0952089e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184fd8);
    FUN_03f5c2a4(&DAT_09191240);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09225ee0);
    FUN_03f5c2a4(&DAT_09226aa0);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_09226970);
    FUN_03f5c2a4(&DAT_091f8a00);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0952089e = 1;
  }
  local_74 = 0.0;
  if (*(int *)(DAT_09191240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09191240 + 0xb8) == 0) {
    return DAT_091f5700;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar5 = 0;
    lVar4 = 0x20;
    uVar1 = DAT_091f5700;
    do {
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar5) {
        if (*(int *)(DAT_09191240 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_09191240 + 0xb8) != 0) {
          uVar1 = System_String__Replace(**(long **)(DAT_09191240 + 0xb8),DAT_09226970,uVar1,0);
          return uVar1;
        }
        break;
      }
      lVar2 = param_1[1];
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_073672b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      fVar6 = *(float *)(lVar2 + uVar5 * 4 + 0x20);
      fVar7 = 1.0;
      if (fVar6 <= 1.0) {
        fVar7 = fVar6;
      }
      local_74 = 0.0;
      if (0.0 <= fVar6) {
        local_74 = fVar7;
      }
      lVar2 = FUN_03f5c394(DAT_091805f8,6);
      if (lVar2 == 0) break;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_073672b0;
      *(undefined8 *)(lVar2 + 0x20) = uVar1;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20),uVar1);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_073672b0;
      *(undefined8 *)(lVar2 + 0x28) = DAT_09225ee0;
      thunk_FUN_03f5d7b8();
      lVar3 = *param_1;
      if (lVar3 == 0) break;
      if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((*(uint *)(lVar3 + 0x18) <= uVar5) ||
         (uVar1 = System_Single__ToString
                            (lVar3 + lVar4,*(undefined8 *)(*(long *)(DAT_09184fd8 + 0xb8) + 0x10),0)
         , *(uint *)(lVar2 + 0x18) < 3)) goto LAB_073672b0;
      *(undefined8 *)(lVar2 + 0x30) = uVar1;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30),uVar1);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_073672b0;
      *(undefined8 *)(lVar2 + 0x38) = DAT_091f8a00;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38));
      uVar1 = System_Single__ToString
                        (&local_74,*(undefined8 *)(*(long *)(DAT_09184fd8 + 0xb8) + 0x10),0);
      if (*(uint *)(lVar2 + 0x18) < 5) goto LAB_073672b0;
      *(undefined8 *)(lVar2 + 0x40) = uVar1;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x40),uVar1);
      if (*(uint *)(lVar2 + 0x18) < 6) goto LAB_073672b0;
      *(undefined8 *)(lVar2 + 0x48) = DAT_09226aa0;
      thunk_FUN_03f5d7b8();
      uVar1 = System_String__Concat(lVar2,0);
      lVar2 = *param_1;
      if (lVar2 == 0) break;
      if ((int)uVar5 + 1 < *(int *)(lVar2 + 0x18)) {
        uVar1 = System_String__Concat(uVar1,DAT_091f86d8,0);
        lVar2 = *param_1;
      }
      lVar4 = lVar4 + 4;
      uVar5 = uVar5 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

