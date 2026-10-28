// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert
// address: 0x3fe3c1c
// body: available
// range: 0x3fe3c1c-0x3fe3d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, unsigned long, wchar_t) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert
               (ulong param_1,ulong param_2,wchar_t param_3)

{
  long lVar1;
  byte *__src;
  byte bVar2;
  undefined4 uVar3;
  ulong *puVar4;
  void *pvVar5;
  ulong uVar6;
  long in_x3;
  long in_x4;
  long in_x5;
  long in_x6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  size_t __n;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  uVar6 = (ulong)(uint)param_3;
  bVar2 = *(byte *)param_1;
  uVar13 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar13 = *(ulong *)(param_1 + 8);
  }
  if (uVar13 < param_2) {
    auVar14 = FUN_03fe365c();
    uVar8 = auVar14._8_8_;
    puVar4 = auVar14._0_8_;
    uVar13 = 0x3fffffffffffffef;
    if (0x3fffffffffffffef - uVar8 < uVar6) {
      FUN_03fe3950(puVar4);
LAB_03fe3e9c:
                    /* WARNING: Subroutine does not return */
      FUN_03f650f4();
    }
    __src = (byte *)((long)puVar4 + 4);
    if ((*puVar4 & 1) != 0) {
      __src = (byte *)puVar4[2];
    }
    if (uVar8 < 0x1fffffffffffffe7) {
      uVar11 = uVar6 + uVar8;
      if (uVar6 + uVar8 <= uVar8 * 2) {
        uVar11 = uVar8 * 2;
      }
      uVar13 = 5;
      if (4 < uVar11) {
        uVar13 = (uVar11 | 3) + 1;
      }
      if (uVar13 >> 0x3e != 0) goto LAB_03fe3e9c;
    }
    pvVar5 = operator_new(uVar13 << 2);
    __n = in_x4 * 4;
    if (in_x4 != 0) {
      memmove(pvVar5,__src,__n);
    }
    lVar12 = in_x3 - (in_x5 + in_x4);
    if (lVar12 != 0) {
      memmove((void *)((long)pvVar5 + in_x6 * 4 + __n),__src + in_x5 * 4 + __n,lVar12 * 4);
    }
    if (uVar8 != 4) {
      operator_delete(__src);
    }
    *puVar4 = uVar13 | 1;
    puVar4[1] = (in_x3 - in_x5) + in_x6;
    puVar4[2] = (ulong)pvVar5;
    return;
  }
  if (uVar6 == 0) {
    return;
  }
  uVar3 = (undefined4)in_x3;
  lVar12 = 4;
  if ((bVar2 & 1) != 0) {
    lVar12 = (*(ulong *)param_1 & 0xfffffffffffffffe) - 1;
  }
  if (lVar12 - uVar13 < uVar6) {
    FUN_03fe3d70(param_1,lVar12,(uVar13 + uVar6) - lVar12,uVar13,param_2,0,uVar6);
    lVar12 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar12 = param_1 + 4;
    if ((*(ulong *)param_1 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x10);
    }
    if (uVar13 - param_2 != 0) {
      pvVar5 = (void *)(lVar12 + param_2 * 4);
      memmove((void *)((long)pvVar5 + uVar6 * 4),pvVar5,(uVar13 - param_2) * 4);
    }
  }
  puVar7 = (undefined4 *)(lVar12 + param_2 * 4);
  uVar8 = uVar6;
  if (7 < uVar6) {
    uVar9 = uVar6 & 0xfffffffffffffff8;
    uVar8 = uVar6 & 7;
    puVar10 = (undefined8 *)(puVar7 + 4);
    uVar11 = uVar9;
    do {
      puVar10[-1] = CONCAT44(uVar3,uVar3);
      puVar10[-2] = CONCAT44(uVar3,uVar3);
      puVar10[1] = CONCAT44(uVar3,uVar3);
      *puVar10 = CONCAT44(uVar3,uVar3);
      uVar11 = uVar11 - 8;
      puVar10 = puVar10 + 4;
    } while (uVar11 != 0);
    puVar7 = puVar7 + uVar9;
    if (uVar9 == uVar6) goto LAB_03fe3d34;
  }
  do {
    uVar8 = uVar8 - 1;
    *puVar7 = uVar3;
    puVar7 = puVar7 + 1;
  } while (uVar8 != 0);
LAB_03fe3d34:
  lVar1 = uVar13 + uVar6;
  if ((*(byte *)param_1 & 1) == 0) {
    *(char *)param_1 = (char)((int)lVar1 << 1);
  }
  else {
    *(long *)(param_1 + 8) = lVar1;
  }
  *(undefined4 *)(lVar12 + lVar1 * 4) = 0;
  return;
}

