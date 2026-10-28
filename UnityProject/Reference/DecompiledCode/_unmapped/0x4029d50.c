// rea decompile_all
// name: FUN_04029d50
// address: 0x4029d50
// body: available
// range: 0x4029d50-0x402a283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402a200 to 0x89dccd0 std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x402a240 to 0x89dc8f0 std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x402a280 to 0x402d5a0 FUN_0402d5a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_04029d50(undefined4 *param_1,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2,ulong param_3,char param_4,char param_5,byte param_6)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  bool bVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  long lVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  
  if ((param_3 & 1) == 0) {
    bVar4 = false;
  }
  else {
    uVar1 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    bVar4 = uVar1 == 4;
  }
  if (param_4 == '\x01') {
    if (param_6 < 2) {
      if (param_6 == 0) {
        *param_1 = 0x4000203;
        if (param_5 == '\0') {
          return;
        }
        if (param_5 == '\x02') {
          return;
        }
joined_r0x04029f3c:
        if (param_5 != '\x01') goto LAB_0402a120;
        goto joined_r0x0402a1d4;
      }
      if (param_6 != 1) goto LAB_0402a120;
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
    }
    else {
      if (param_6 == 2) {
        *(undefined1 *)param_1 = 2;
        *(undefined1 *)((long)param_1 + 3) = 3;
        if (param_5 != '\x02') {
          if (param_5 != '\x01') {
            if (param_5 == '\0') {
              *(undefined2 *)((long)param_1 + 1) = 0x400;
              return;
            }
            goto LAB_0402a120;
          }
          uVar5 = 0x400;
          goto LAB_0402a218;
        }
        uVar5 = 0x104;
        goto LAB_0402a198;
      }
      if (param_6 != 3) {
        if (param_6 == 4) {
          *(undefined1 *)param_1 = 2;
          *(undefined1 *)((long)param_1 + 3) = 4;
          if (param_5 == '\x02') {
            uVar5 = 0x300;
            goto LAB_0402a218;
          }
          if (param_5 == '\x01') {
            uVar5 = 0x103;
            goto LAB_0402a198;
          }
          if (param_5 == '\0') {
            *(undefined2 *)((long)param_1 + 1) = 3;
            return;
          }
        }
        goto LAB_0402a120;
      }
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
    }
    if (param_5 == '\x02') {
      uVar5 = 0x201;
LAB_0402a198:
      *(undefined2 *)((long)param_1 + 1) = uVar5;
      if (bVar4) {
        bVar2 = *param_2;
        uVar1 = (ulong)((byte)bVar2 >> 1);
        if (((byte)bVar2 & 1) != 0) {
          uVar1 = *(ulong *)(param_2 + 8);
        }
        lVar7 = uVar1 - 1;
        if (((byte)bVar2 & 1) == 0) {
          pbVar10 = param_2 + 1;
          *param_2 = SUB41((int)lVar7 << 1,0);
        }
        else {
          pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(param_2 + 0x10);
          *(long *)(param_2 + 8) = lVar7;
        }
        pbVar10[lVar7] =
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
        return;
      }
      return;
    }
    if (param_5 == '\x01') {
      uVar5 = 2;
LAB_0402a218:
      *(undefined2 *)((long)param_1 + 1) = uVar5;
      if (!bVar4) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(param_2,' ');
        return;
      }
      return;
    }
    if (param_5 == '\0') {
      *(undefined2 *)((long)param_1 + 1) = 2;
      return;
    }
LAB_0402a120:
    *param_1 = 0x4000302;
    return;
  }
  if (param_4 != '\0') goto LAB_0402a120;
  if (bVar4) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    lVar7 = uVar1 - 3;
    if (lVar7 != 0) {
      if (uVar1 == 4) {
        bVar2 = pbVar10[3];
        __n = (long)(pbVar10 + 3) - (long)pbVar10;
        if (__n != 0) {
          memmove(pbVar10 + (4 - __n),pbVar10,__n);
        }
        *pbVar10 = bVar2;
      }
      else if (lVar7 == 3) {
        bVar2 = *pbVar10;
        *pbVar10 = pbVar10[3];
        pbVar10[3] = bVar2;
        if (uVar1 != 4) {
          bVar2 = pbVar10[1];
          pbVar10[1] = pbVar10[4];
          pbVar10[4] = bVar2;
          if (uVar1 != 5) {
            bVar2 = pbVar10[2];
            pbVar10[2] = pbVar10[5];
            pbVar10[5] = bVar2;
          }
        }
      }
      else {
        lVar11 = 3;
        do {
          lVar6 = lVar7;
          lVar7 = 0;
          if (lVar6 != 0) {
            lVar7 = lVar11 / lVar6;
          }
          lVar7 = lVar11 - lVar7 * lVar6;
          lVar11 = lVar6;
        } while (lVar7 != 0);
        pbVar9 = pbVar10 + lVar6;
        do {
          pbVar8 = pbVar9 + -1;
          bVar2 = *pbVar8;
          pbVar12 = pbVar8;
          pbVar9 = pbVar9 + 2;
          do {
            pbVar13 = pbVar9;
            pbVar3 = pbVar13;
            if ((long)(pbVar10 + (uVar1 - (long)pbVar13)) < 4) {
              pbVar3 = pbVar10 + -(long)(pbVar10 + (uVar1 - (long)pbVar13));
            }
            *pbVar12 = *pbVar13;
            pbVar12 = pbVar13;
            pbVar9 = pbVar3 + 3;
          } while (pbVar3 + 3 != pbVar8);
          *pbVar13 = bVar2;
          pbVar9 = pbVar8;
        } while (pbVar8 != pbVar10);
      }
    }
  }
  if (param_6 < 2) {
    if (param_6 == 0) {
      *param_1 = 0x2000403;
      if (param_5 == '\0') {
        return;
      }
      if (param_5 == '\x02') {
        return;
      }
      goto joined_r0x04029f3c;
    }
    if (param_6 != 1) goto LAB_0402a120;
    *(undefined1 *)param_1 = 3;
    *(undefined1 *)((long)param_1 + 3) = 2;
    if (param_5 == '\x02') {
      uVar5 = 0x401;
      goto LAB_0402a248;
    }
    if (param_5 != '\x01') {
      if (param_5 == '\0') {
        *(undefined2 *)((long)param_1 + 1) = 4;
        return;
      }
      goto LAB_0402a120;
    }
    uVar5 = 4;
  }
  else {
    if (param_6 == 2) {
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          if (!bVar4) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                      (param_2,0,1,' ');
          }
          goto LAB_0402a0b4;
        }
LAB_0402a0b0:
        if (param_5 == '\0') {
LAB_0402a0b4:
          *(undefined2 *)((long)param_1 + 1) = 0x200;
          return;
        }
        goto LAB_0402a120;
      }
LAB_0402a148:
      uVar5 = 0x102;
LAB_0402a248:
      *(undefined2 *)((long)param_1 + 1) = uVar5;
      if (bVar4) {
        pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(param_2 + 0x10);
        if (((byte)*param_2 & 1) == 0) {
          pbVar10 = param_2 + 1;
        }
        FUN_0402d5a0(param_2,pbVar10);
        return;
      }
      return;
    }
    if (param_6 == 3) {
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 2;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          uVar5 = 0x301;
          goto LAB_0402a248;
        }
        if (param_5 == '\0') {
          *(undefined2 *)((long)param_1 + 1) = 0x300;
          return;
        }
        goto LAB_0402a120;
      }
      uVar5 = 3;
    }
    else {
      if (param_6 != 4) goto LAB_0402a120;
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') goto LAB_0402a148;
      if (param_5 != '\x01') goto LAB_0402a0b0;
      uVar5 = 0x200;
    }
  }
  *(undefined2 *)((long)param_1 + 1) = uVar5;
joined_r0x0402a1d4:
  if (!bVar4) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    insert(param_2,0,1,' ');
    return;
  }
  return;
}

