// rea decompile_all
// name: std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
// address: 0x3ff835c
// body: available
// range: 0x3ff835c-0x3ff8567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3ff8564 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::str() const */

void std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
     ::str(void)

{
  undefined8 *puVar1;
  long in_x0;
  long *in_x8;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((*(uint *)(in_x0 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(in_x0 + 0x60) >> 3 & 1) == 0) {
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      return;
    }
    puVar12 = *(undefined1 **)(in_x0 + 0x10);
    puVar10 = *(undefined1 **)(in_x0 + 0x20);
    uVar11 = (long)puVar10 - (long)puVar12;
    if (uVar11 < 0xfffffffffffffff0) {
      if (uVar11 < 0x17) {
        puVar3 = (undefined1 *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)uVar11 << 1);
      }
      else {
        puVar3 = operator_new((uVar11 | 0xf) + 1);
        in_x8[1] = uVar11;
        in_x8[2] = (long)puVar3;
        *in_x8 = (uVar11 | 0xf) + 2;
      }
      puVar5 = puVar3;
      if (puVar12 != puVar10) {
        if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar3 - (long)puVar12))) {
          uVar7 = uVar11 & 0xffffffffffffffe0;
          puVar8 = (undefined8 *)(puVar12 + 0x10);
          puVar4 = (undefined8 *)(puVar3 + 0x10);
          uVar9 = uVar7;
          do {
            puVar1 = puVar8 + -1;
            uVar13 = puVar8[-2];
            uVar15 = puVar8[1];
            uVar14 = *puVar8;
            uVar9 = uVar9 - 0x20;
            puVar8 = puVar8 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar13;
            puVar4[1] = uVar15;
            *puVar4 = uVar14;
            puVar4 = puVar4 + 4;
          } while (uVar9 != 0);
          puVar5 = puVar3 + uVar7;
          puVar3 = puVar3 + uVar7;
          puVar12 = puVar12 + uVar7;
          if (uVar11 == uVar7) goto LAB_03ff8540;
        }
        do {
          puVar6 = puVar12 + 1;
          *puVar3 = *puVar12;
          puVar5 = puVar3 + 1;
          puVar3 = puVar3 + 1;
          puVar12 = puVar6;
        } while (puVar6 != puVar10);
      }
      goto LAB_03ff8540;
    }
  }
  else {
    puVar12 = *(undefined1 **)(in_x0 + 0x58);
    puVar3 = *(undefined1 **)(in_x0 + 0x30);
    puVar10 = puVar12;
    if (puVar12 < puVar3) {
      *(undefined1 **)(in_x0 + 0x58) = puVar3;
      puVar10 = puVar3;
    }
    puVar6 = *(undefined1 **)(in_x0 + 0x28);
    uVar11 = (long)puVar10 - (long)puVar6;
    if (uVar11 < 0xfffffffffffffff0) {
      if (uVar11 < 0x17) {
        puVar2 = (undefined1 *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)uVar11 << 1);
      }
      else {
        puVar2 = operator_new((uVar11 | 0xf) + 1);
        in_x8[1] = uVar11;
        in_x8[2] = (long)puVar2;
        *in_x8 = (uVar11 | 0xf) + 2;
      }
      puVar5 = puVar2;
      if (puVar6 != puVar10) {
        if (puVar12 <= puVar3) {
          puVar12 = puVar3;
        }
        uVar11 = (long)puVar12 - (long)puVar6;
        if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar2 - (long)puVar6))) {
          uVar7 = uVar11 & 0xffffffffffffffe0;
          puVar8 = (undefined8 *)(puVar6 + 0x10);
          puVar5 = puVar2 + uVar7;
          puVar4 = (undefined8 *)(puVar2 + 0x10);
          uVar9 = uVar7;
          do {
            puVar1 = puVar8 + -1;
            uVar13 = puVar8[-2];
            uVar15 = puVar8[1];
            uVar14 = *puVar8;
            uVar9 = uVar9 - 0x20;
            puVar8 = puVar8 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar13;
            puVar4[1] = uVar15;
            *puVar4 = uVar14;
            puVar4 = puVar4 + 4;
          } while (uVar9 != 0);
          puVar2 = puVar5;
          puVar6 = puVar6 + uVar7;
          if (uVar11 == uVar7) goto LAB_03ff8540;
        }
        do {
          puVar12 = puVar6 + 1;
          puVar5 = puVar2 + 1;
          *puVar2 = *puVar6;
          puVar2 = puVar5;
          puVar6 = puVar12;
        } while (puVar12 != puVar10);
      }
LAB_03ff8540:
      *puVar5 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5d118();
}

