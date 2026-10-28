// rea decompile_all
// name: FUN_03fc320c
// address: 0x3fc320c
// body: available
// range: 0x3fc320c-0x3fc3407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc3404 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc320c(uint *param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long alStack_60 [2];
  
  lVar3 = tpidr_el0;
  alStack_60[1] = *(long *)(lVar3 + 0x28);
  if (param_1 != (uint *)0x0) {
    lVar7 = (long)alStack_60 - ((ulong)*param_1 * 8 + 0xf & 0xffffffff0);
    if (*param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar4 = FUN_03fb845c(*(undefined8 *)(*(long *)(param_1 + 2) + uVar9 * 8));
        if ((uVar4 & 1) == 0) {
          plVar8 = *(long **)(*(long *)(param_1 + 2) + uVar9 * 8);
          if (*DAT_09535b88 == '\0') goto LAB_03fc337c;
          uVar4 = FUN_03fb8604(plVar8);
          plVar1 = plVar8;
          while ((uVar4 & 1) == 0) {
            uVar4 = FUN_03fb8274(plVar1);
            if ((uVar4 & 1) == 0) goto LAB_03fc337c;
            lVar5 = FUN_03fb4784(*plVar1);
            plVar1 = (long *)(lVar5 + 0x20);
            uVar4 = FUN_03fb8604(plVar1);
          }
          lVar5 = FUN_03fb81f4(plVar8);
          bVar2 = *(byte *)(lVar5 + 10);
          lVar5 = DAT_095356b0;
          if (bVar2 < 7) {
            if (bVar2 < 5) {
              if ((bVar2 == 3) || (lVar5 = DAT_09535688, bVar2 == 4)) goto LAB_03fc3378;
            }
            else {
              lVar5 = DAT_095356a8;
              if ((bVar2 == 5) || (lVar5 = DAT_09535690, bVar2 == 6)) goto LAB_03fc3378;
            }
          }
          else if (bVar2 < 9) {
            if ((bVar2 == 7) || (lVar5 = DAT_09535698, bVar2 == 8)) goto LAB_03fc3378;
          }
          else {
            lVar5 = DAT_095356b8;
            if ((bVar2 == 9) ||
               ((lVar5 = DAT_095356a0, bVar2 == 10 || (lVar5 = DAT_095356c0, bVar2 == 0xb)))) {
LAB_03fc3378:
              plVar8 = (long *)(lVar5 + 0x20);
            }
          }
LAB_03fc337c:
          uVar4 = FUN_03fb8274(plVar8);
          if ((uVar4 & 1) != 0) {
            uVar6 = FUN_03fc320c(*(undefined8 *)(*plVar8 + 8));
            uVar6 = FUN_03f77224(*(undefined8 *)*plVar8,uVar6);
            lVar5 = FUN_03fb49f4(uVar6,1);
            plVar8 = (long *)(lVar5 + 0x20);
          }
        }
        else {
          plVar8 = (long *)(DAT_095353e8 + 0x20);
        }
        uVar4 = (ulong)*param_1;
        *(long **)(lVar7 + uVar9 * 8) = plVar8;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
    FUN_03fc0f6c(lVar7,uVar4);
  }
  if (*(long *)(lVar3 + 0x28) == alStack_60[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

