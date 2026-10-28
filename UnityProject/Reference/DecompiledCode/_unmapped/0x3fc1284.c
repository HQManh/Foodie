// rea decompile_all
// name: FUN_03fc1284
// address: 0x3fc1284
// body: available
// range: 0x3fc1284-0x3fc14af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc1468 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fc14ac to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fc1284(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long alStack_60 [2];
  
  lVar3 = tpidr_el0;
  alStack_60[1] = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_2 + 0xb8);
  lVar9 = *(long *)(param_2 + 0xc0) - lVar6;
  lVar5 = param_1;
  if (lVar9 == 0) {
joined_r0x03fc13a8:
    if (lVar5 != 0) goto LAB_03fc1414;
  }
  else {
    lVar9 = (long)alStack_60 - ((lVar9 >> 3) * -0x58469ee58469ee58 + 0xfU & 0xfffffffffffffff0);
    iVar10 = 0;
    do {
      lVar5 = FUN_03fc18f4(lVar6,param_3);
      if (((param_3 >> 1 & 1) != 0) && (lVar5 == 0)) goto LAB_03fc144c;
      if (lVar5 == 0) {
        lVar5 = 0;
        goto LAB_03fc141c;
      }
      lVar8 = *(long *)(param_2 + 0xc0);
      lVar6 = lVar6 + 0xe8;
      *(long *)(lVar9 + (long)iVar10 * 8) = lVar5;
      iVar10 = iVar10 + 1;
    } while (lVar6 != lVar8);
    uVar4 = FUN_03fac998(*(undefined8 *)(param_1 + 0xf0));
    if ((*(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8) >> 3) * 0x34f72c234f72c235 -
        (ulong)uVar4 != 0) {
      if (*(long *)(lVar3 + 0x28) == alStack_60[1]) {
        uVar7 = FUN_03fa673c(&DAT_01a7583b,
                             "The number of generic arguments provided doesn\'t equal the arity of the generic type definition."
                            );
        goto LAB_03fc1464;
      }
      goto LAB_03fc14ac;
    }
    bVar2 = *(byte *)(param_2 + 0x30);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 0x38);
    }
    if (uVar1 != 0) {
      lVar6 = param_2 + 0x31;
      if ((bVar2 & 1) != 0) {
        lVar6 = *(long *)(param_2 + 0x40);
      }
      lVar6 = FUN_03f98818(lVar6);
      if (((param_3 >> 1 & 1) != 0) && (lVar6 == 0)) {
LAB_03fc144c:
        if (*(long *)(lVar3 + 0x28) == alStack_60[1]) {
          uVar7 = FUN_03fa6884(param_2);
          goto LAB_03fc1464;
        }
        goto LAB_03fc14ac;
      }
      if (lVar6 != 0) {
        lVar6 = FUN_03f98700();
        if (((param_3 >> 1 & 1) != 0) && (lVar6 == 0)) goto LAB_03fc144c;
        if (lVar6 != 0) goto LAB_03fc13e8;
      }
LAB_03fc1404:
      lVar5 = 0;
joined_r0x03fc13fc:
      if (((param_3 >> 1 & 1) != 0) && (lVar5 == 0)) {
        uVar7 = FUN_03fa6884(param_2);
        if (*(long *)(lVar3 + 0x28) == alStack_60[1]) {
LAB_03fc1464:
                    /* WARNING: Subroutine does not return */
          FUN_03fa5c38(uVar7,0);
        }
        goto LAB_03fc14ac;
      }
      goto joined_r0x03fc13a8;
    }
    lVar6 = FUN_03fb4c98();
    lVar5 = FUN_03fc0f40(param_1,lVar9,uVar4);
    if (lVar5 == 0) {
      lVar5 = FUN_03fb4dc4();
      if (lVar6 == lVar5) goto LAB_03fc1404;
      FUN_03fb4dc4();
LAB_03fc13e8:
      lVar5 = FUN_03fc0f40(param_1,lVar9,uVar4);
      goto joined_r0x03fc13fc;
    }
LAB_03fc1414:
    FUN_03fbea4c(lVar5);
  }
LAB_03fc141c:
  if (*(long *)(lVar3 + 0x28) == alStack_60[1]) {
    return lVar5;
  }
LAB_03fc14ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

