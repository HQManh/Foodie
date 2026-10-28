// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::push_back
// address: 0x3fe4bc8
// body: available
// range: 0x3fe4bc8-0x3fe4cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe4c64 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::push_back(wchar_t) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     push_back(wchar_t param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *puVar4;
  void *pvVar5;
  undefined4 in_w1;
  undefined4 in_w2;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  puVar4 = (ulong *)(ulong)(uint)param_1;
  bVar3 = (byte)*puVar4;
  if ((bVar3 & 1) == 0) {
    if (bVar3 != 8) {
      uVar12 = (ulong)(bVar3 >> 1);
      uVar6 = (long)puVar4 + 4;
      *(byte *)puVar4 = bVar3 + 2;
      goto LAB_03fe4cc8;
    }
    pvVar11 = (void *)((long)puVar4 + 4);
    uVar6 = 4;
LAB_03fe4c38:
    uVar8 = uVar6 * 2;
    if (uVar8 < uVar6 + 1) {
      uVar8 = uVar6 + 1;
    }
    uVar12 = 5;
    if (4 < uVar8) {
      uVar12 = (uVar8 | 3) + 1;
    }
    if (uVar12 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f650f4();
    }
LAB_03fe4c88:
    pvVar5 = operator_new(uVar12 << 2);
    memmove(pvVar5,pvVar11,uVar6 << 2);
    if (uVar6 != 4) {
      operator_delete(pvVar11);
    }
    puVar4[2] = (ulong)pvVar5;
    *puVar4 = uVar12 | 1;
    uVar12 = uVar6;
  }
  else {
    uVar12 = puVar4[1];
    uVar6 = (*puVar4 & 0xfffffffffffffffe) - 1;
    if (uVar12 == uVar6) {
      if ((*puVar4 & 0xfffffffffffffffe) == 0x3ffffffffffffff0) {
        auVar14 = FUN_03fe3950(puVar4);
        uVar12 = auVar14._8_8_;
        puVar4 = auVar14._0_8_;
        if (uVar12 == 0) {
          return;
        }
        uVar8 = *puVar4;
        uVar9 = *puVar4;
        uVar6 = 4;
        if ((uVar9 & 1) != 0) {
          uVar6 = (uVar8 & 0xfffffffffffffffe) - 1;
        }
        uVar2 = uVar8 >> 1 & 0x7f;
        if ((uVar8 & 1) != 0) {
          uVar2 = puVar4[1];
        }
        if (uVar6 - uVar2 < uVar12) {
          uVar1 = uVar2 + uVar12;
          uVar13 = 0x3fffffffffffffef;
          if (0x3fffffffffffffef - uVar6 < uVar1 - uVar6) {
            FUN_03fe3950();
LAB_03fe4eb0:
                    /* WARNING: Subroutine does not return */
            FUN_03f650f4();
          }
          pvVar5 = (void *)((long)puVar4 + 4);
          if ((uVar8 & 1) != 0) {
            pvVar5 = (void *)puVar4[2];
          }
          if (uVar6 < 0x1fffffffffffffe7) {
            if (uVar1 <= uVar6 * 2) {
              uVar1 = uVar6 * 2;
            }
            uVar13 = 5;
            if (4 < uVar1) {
              uVar13 = (uVar1 | 3) + 1;
            }
            if (uVar13 >> 0x3e != 0) goto LAB_03fe4eb0;
          }
          pvVar11 = operator_new(uVar13 << 2);
          if (uVar2 != 0) {
            memmove(pvVar11,pvVar5,uVar2 << 2);
          }
          if ((uVar9 & 1) != 0) {
            operator_delete(pvVar5);
          }
          puVar4[1] = uVar2;
          puVar4[2] = (ulong)pvVar11;
          *puVar4 = uVar13 | 1;
          puVar7 = (undefined4 *)((long)pvVar11 + uVar2 * 4);
        }
        else {
          pvVar11 = (void *)((long)puVar4 + 4);
          if ((uVar8 & 1) != 0) {
            pvVar11 = (void *)puVar4[2];
          }
          puVar7 = (undefined4 *)((long)pvVar11 + uVar2 * 4);
        }
        uVar6 = uVar12;
        if (7 < uVar12) {
          uVar9 = uVar12 & 0xfffffffffffffff8;
          uVar6 = uVar12 & 7;
          puVar10 = (undefined8 *)(puVar7 + 4);
          uVar8 = uVar9;
          do {
            puVar10[-1] = CONCAT44(in_w2,in_w2);
            puVar10[-2] = CONCAT44(in_w2,in_w2);
            puVar10[1] = CONCAT44(in_w2,in_w2);
            *puVar10 = CONCAT44(in_w2,in_w2);
            uVar8 = uVar8 - 8;
            puVar10 = puVar10 + 4;
          } while (uVar8 != 0);
          puVar7 = puVar7 + uVar9;
          if (uVar9 == uVar12) goto LAB_03fe4e70;
        }
        do {
          uVar6 = uVar6 - 1;
          *puVar7 = in_w2;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
LAB_03fe4e70:
        uVar2 = uVar2 + uVar12;
        if ((*puVar4 & 1) == 0) {
          *(char *)puVar4 = (char)((int)uVar2 << 1);
        }
        else {
          puVar4[1] = uVar2;
        }
        *(undefined4 *)((long)pvVar11 + uVar2 * 4) = 0;
        return;
      }
      pvVar11 = (void *)puVar4[2];
      if (uVar6 < 0x1fffffffffffffe7) goto LAB_03fe4c38;
      uVar12 = 0x3fffffffffffffef;
      goto LAB_03fe4c88;
    }
  }
  uVar6 = puVar4[2];
  puVar4[1] = uVar12 + 1;
LAB_03fe4cc8:
  puVar7 = (undefined4 *)(uVar6 + uVar12 * 4);
  *puVar7 = in_w1;
  puVar7[1] = 0;
  return;
}

