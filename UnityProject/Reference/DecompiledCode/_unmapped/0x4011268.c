// rea decompile_all
// name: FUN_04011268
// address: 0x4011268
// body: available
// range: 0x4011268-0x40115d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40115d4 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *
FUN_04011268(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             *param_1,
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *param_2,basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     *param_3)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar6;
  ulong uVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **ppbVar9;
  bool bVar10;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar11;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar12;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar13;
  ulong uVar14;
  wchar_t *pwVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *local_88;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
  *pbStack_80;
  ulong local_78;
  ulong local_70;
  wchar_t *local_68;
  
  uVar5 = *(ulong *)param_1;
  uVar18 = *(ulong *)(param_1 + 8);
  bVar6 = *param_1;
  bVar10 = ((byte)bVar6 & 1) != 0;
  uVar17 = (uVar5 & 0xfffffffffffffffe) - 1;
  uVar3 = (ulong)((byte)bVar6 >> 1);
  if (bVar10) {
    uVar3 = uVar18;
  }
  uVar4 = 4;
  if (bVar10) {
    uVar4 = uVar17;
  }
  uVar7 = (long)param_3 - (long)param_2;
  if (uVar7 == 0) {
    return param_1;
  }
  local_88 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(param_1 + 0x10);
  pbStack_80 = param_1 + 4;
  uVar19 = uVar5 >> 1 & 0x7f;
  uVar14 = (long)uVar7 >> 2;
  uVar2 = uVar19;
  pbVar12 = pbStack_80;
  if ((uVar5 & 1) != 0) {
    uVar2 = uVar18;
    pbVar12 = local_88;
  }
  if ((pbVar12 <= param_2) && (param_2 < pbVar12 + uVar2 * 4 + 4)) {
    if (uVar14 < 0x3ffffffffffffff0) {
      if (uVar14 < 5) {
        pwVar15 = (wchar_t *)((ulong)&local_78 | 4);
        local_78 = CONCAT71(local_78._1_7_,(char)(uVar7 >> 1)) & 0xfffffffffffffffe;
      }
      else {
        pwVar15 = operator_new((uVar14 | 3) * 4 + 4);
        local_78 = (uVar14 | 3) + 2;
        local_70 = uVar14;
        local_68 = pwVar15;
      }
      __n = (uVar7 - 4 & 0xfffffffffffffffc) + 4;
      memcpy(pwVar15,param_2,__n);
      *(undefined4 *)((long)pwVar15 + __n) = 0;
      bVar16 = (byte)local_78 & 1;
      uVar3 = (ulong)((byte)local_78 >> 1);
      pwVar15 = (wchar_t *)((ulong)&local_78 | 4);
      if ((local_78 & 1) != 0) {
        uVar3 = local_70;
        pwVar15 = local_68;
      }
      uVar4 = 4;
      if ((uVar5 & 1) != 0) {
        uVar4 = uVar17;
      }
      if ((uVar5 & 1) != 0) {
        uVar19 = uVar18;
      }
      if (uVar4 - uVar19 < uVar3) {
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by_and_replace(param_1,uVar4,(uVar3 - uVar4) + uVar19,uVar19,uVar19,0,uVar3,pwVar15);
        bVar16 = (byte)local_78 & 1;
      }
      else if (uVar3 != 0) {
        ppbVar9 = &pbStack_80;
        if ((uVar5 & 1) != 0) {
          ppbVar9 = &local_88;
        }
        pbVar12 = *ppbVar9;
        memmove(pbVar12 + uVar19 * 4,pwVar15,uVar3 << 2);
        lVar1 = uVar19 + uVar3;
        if (((byte)*param_1 & 1) == 0) {
          *param_1 = SUB41((int)lVar1 << 1,0);
        }
        else {
          *(long *)(param_1 + 8) = lVar1;
        }
        *(undefined4 *)(pbVar12 + lVar1 * 4) = 0;
      }
      if (bVar16 != 0) {
        operator_delete(local_68);
        return param_1;
      }
      return param_1;
    }
    FUN_03fe3950(&local_78);
LAB_040115cc:
    FUN_03fe3950(param_1);
LAB_040115d4:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  if (uVar4 - uVar3 < uVar14) {
    uVar5 = uVar3 + uVar14;
    uVar18 = 0x3fffffffffffffef;
    if (0x3fffffffffffffef - uVar4 < uVar5 - uVar4) goto LAB_040115cc;
    if (uVar4 < 0x1fffffffffffffe7) {
      if (uVar5 <= uVar4 * 2) {
        uVar5 = uVar4 * 2;
      }
      uVar18 = 5;
      if (4 < uVar5) {
        uVar18 = (uVar5 | 3) + 1;
      }
      if (uVar18 >> 0x3e != 0) goto LAB_040115d4;
    }
    pbVar11 = operator_new(uVar18 << 2);
    if (uVar3 != 0) {
      memmove(pbVar11,pbVar12,uVar3 << 2);
    }
    if (((byte)bVar6 & 1) != 0) {
      operator_delete(pbVar12);
    }
    *(ulong *)(param_1 + 8) = uVar3;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (param_1 + 0x10) = pbVar11;
    *(ulong *)param_1 = uVar18 | 1;
    pbVar12 = pbVar11 + uVar3 * 4;
  }
  else {
    pbVar11 = pbStack_80;
    if ((uVar5 & 1) != 0) {
      pbVar11 = local_88;
    }
    pbVar12 = pbVar11 + uVar3 * 4;
  }
  if ((0x1b < uVar7 - 4) &&
     ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *)
      0x1f < pbVar11 + (uVar3 * 4 - (long)param_2))) {
    pbVar11 = pbVar11 + uVar3 * 4 + 0x10;
    uVar5 = (uVar7 - 4 >> 2) + 1;
    uVar17 = uVar5 & 0x7ffffffffffffff8;
    pbVar12 = pbVar12 + uVar17 * 4;
    pbVar13 = param_2 + 0x10;
    uVar18 = uVar17;
    do {
      pbVar8 = pbVar13 + -8;
      uVar20 = *(undefined8 *)(pbVar13 + -0x10);
      uVar22 = *(undefined8 *)(pbVar13 + 8);
      uVar21 = *(undefined8 *)pbVar13;
      uVar18 = uVar18 - 8;
      pbVar13 = pbVar13 + 0x20;
      *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pbVar8;
      *(undefined8 *)(pbVar11 + -0x10) = uVar20;
      *(undefined8 *)(pbVar11 + 8) = uVar22;
      *(undefined8 *)pbVar11 = uVar21;
      pbVar11 = pbVar11 + 0x20;
    } while (uVar18 != 0);
    param_2 = param_2 + uVar17 * 4;
    if (uVar5 == uVar17) goto LAB_04011430;
  }
  do {
    pbVar13 = param_2 + 4;
    pbVar11 = pbVar12 + 4;
    *(undefined4 *)pbVar12 = *(undefined4 *)param_2;
    pbVar12 = pbVar11;
    param_2 = pbVar13;
  } while (pbVar13 != param_3);
LAB_04011430:
  *(undefined4 *)pbVar12 = 0;
  if (((byte)*param_1 & 1) == 0) {
    *param_1 = SUB41((int)(uVar3 + uVar14) << 1,0);
  }
  else {
    *(ulong *)(param_1 + 8) = uVar3 + uVar14;
  }
  return param_1;
}

