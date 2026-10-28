// rea decompile_all
// name: FUN_03fb73e4
// address: 0x3fb73e4
// body: available
// range: 0x3fb73e4-0x3fb7afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb75a0 to 0x89dc8f0 std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fb785c to 0x89dbd70 std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb73e4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 *param_2,int param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  
  bVar1 = *(byte *)((long)param_2 + 10);
  if (0x13 < bVar1) {
    if (bVar1 == 0x1e) {
LAB_03fb7560:
      thunk_FUN_03f98700(param_2);
      pcVar9 = (char *)thunk_FUN_03fac9f4();
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(param_1,pcVar9);
      if ((*(byte *)((long)param_2 + 0xb) >> 5 & 1) == 0) {
        return;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_1,'&');
      return;
    }
    if (bVar1 == 0x1d) {
      plVar4 = (long *)FUN_03fbe574(*param_2,1);
      iVar2 = param_3;
      if (1 < param_3) {
        iVar2 = 2;
      }
      FUN_03fb73e4(param_1,plVar4 + 4,iVar2,0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(param_1,"[]");
      if ((*(byte *)((long)param_2 + 0xb) >> 5 & 1) != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(param_1,'&');
      }
      if (param_3 != 4) {
        if (param_3 != 3) {
          return;
        }
        FUN_03fb43ec(local_88,*(long *)(*plVar4 + 0x10) + 0x18);
        puVar5 = (ulong *)std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::insert(local_88,0,", ");
        local_60 = (char *)puVar5[2];
        uStack_68 = puVar5[1];
        local_70 = *puVar5;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        uVar12 = local_70 >> 1 & 0x7f;
        pcVar9 = (char *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          uVar12 = uStack_68;
          pcVar9 = local_60;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,pcVar9,uVar12);
        goto LAB_03fb7730;
      }
    }
    else {
      if (bVar1 != 0x14) goto LAB_03fb7754;
      lVar3 = FUN_03fbe574(param_2,1);
      plVar4 = (long *)FUN_03fbeb18();
      iVar2 = param_3;
      if (1 < param_3) {
        iVar2 = 2;
      }
      FUN_03fb73e4(param_1,plVar4 + 4,iVar2,0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_1,'[');
      bVar1 = *(byte *)(lVar3 + 0x132);
      if (bVar1 == 1) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(param_1,'*');
        bVar1 = *(byte *)(lVar3 + 0x132);
      }
      if (1 < bVar1) {
        uVar8 = 1;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (param_1,',');
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(byte *)(lVar3 + 0x132));
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_1,']');
      if ((*(byte *)((long)param_2 + 0xb) >> 5 & 1) != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(param_1,'&');
      }
      if (param_3 != 4) {
        if (param_3 != 3) {
          return;
        }
        FUN_03fb43ec(local_88,*(long *)(*plVar4 + 0x10) + 0x18);
        puVar5 = (ulong *)std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::insert(local_88,0,", ");
        local_60 = (char *)puVar5[2];
        uStack_68 = puVar5[1];
        local_70 = *puVar5;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        uVar12 = local_70 >> 1 & 0x7f;
        pcVar9 = (char *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          uVar12 = uStack_68;
          pcVar9 = local_60;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_1,pcVar9,uVar12);
        goto LAB_03fb7730;
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,", ");
    lVar3 = *plVar4;
LAB_03fb7840:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,*(char **)(lVar3 + 8));
    return;
  }
  if (bVar1 == 0xf) {
    iVar2 = param_3;
    if (1 < param_3) {
      iVar2 = 2;
    }
    FUN_03fb73e4(param_1,*param_2,iVar2,0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(param_1,'*');
    if ((*(byte *)((long)param_2 + 0xb) >> 5 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_1,'&');
    }
    if (param_3 != 4) {
      if (param_3 != 3) {
        return;
      }
      plVar4 = (long *)FUN_03fbe574(*param_2,1);
      FUN_03fb43ec(local_88,*(long *)(*plVar4 + 0x10) + 0x18);
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::insert(local_88,0,", ");
      local_60 = (char *)puVar5[2];
      uStack_68 = puVar5[1];
      local_70 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uVar12 = local_70 >> 1 & 0x7f;
      pcVar9 = (char *)((ulong)&local_70 | 1);
      if ((local_70 & 1) != 0) {
        uVar12 = uStack_68;
        pcVar9 = local_60;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(param_1,pcVar9,uVar12);
      goto LAB_03fb7730;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,", ");
    plVar4 = (long *)FUN_03fbe574(*param_2,1);
    lVar3 = *plVar4;
    goto LAB_03fb7840;
  }
  if (bVar1 == 0x13) goto LAB_03fb7560;
LAB_03fb7754:
  plVar4 = (long *)FUN_03fbe574(param_2,1);
  FUN_03fbea4c();
  lVar3 = FUN_03fc1a78(plVar4);
  if (lVar3 == 0) {
    if (*(char *)plVar4[3] != '\0') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(param_1,(char *)plVar4[3]);
      cVar7 = '.';
      goto LAB_03fb77d0;
    }
  }
  else {
    FUN_03fb73e4(param_1,lVar3 + 0x20,param_3,1);
    cVar7 = '.';
    if (param_3 != 0) {
      cVar7 = '+';
    }
LAB_03fb77d0:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(param_1,cVar7);
  }
  pcVar9 = (char *)plVar4[2];
  if (param_3 == 0) {
    pcVar6 = strchr(pcVar9,0x60);
    if (pcVar6 == (char *)0x0) {
      FUN_03f6321c(&local_70,pcVar9);
    }
    else {
      FUN_03f67c24(&local_70,pcVar9,pcVar6,(long)pcVar6 - (long)pcVar9);
    }
    uVar12 = (ulong)((byte)local_70 >> 1);
    pcVar9 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar12 = uStack_68;
      pcVar9 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,pcVar9,uVar12);
    if (((byte)local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,pcVar9);
  }
  if ((param_4 & 1) != 0) {
    return;
  }
  if (plVar4[0xc] == 0) {
    uVar12 = FUN_03fbf77c(plVar4);
    if ((param_3 < 2) && ((uVar12 & 1) != 0)) {
      lVar3 = plVar4[0x1e];
      cVar7 = '<';
      if (param_3 != 0) {
        cVar7 = '[';
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_1,cVar7);
      iVar2 = thunk_FUN_03fac998(lVar3);
      if (iVar2 != 0) {
        iVar11 = 0;
        do {
          if (iVar11 != 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(param_1,',');
          }
          thunk_FUN_03fac7e4(lVar3,iVar11);
          pcVar9 = (char *)thunk_FUN_03fac9f4();
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_1,pcVar9);
          iVar11 = iVar11 + 1;
        } while (iVar2 != iVar11);
      }
      goto LAB_03fb7a20;
    }
  }
  else {
    puVar10 = *(uint **)(plVar4[0xc] + 8);
    iVar2 = 3;
    if (param_3 != 2) {
      iVar2 = param_3;
    }
    cVar7 = '<';
    if (param_3 != 0) {
      cVar7 = '[';
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(param_1,cVar7);
    if (*puVar10 != 0) {
      uVar12 = 0;
      do {
        lVar3 = *(long *)(*(long *)(puVar10 + 2) + uVar12 * 8);
        if (uVar12 != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (param_1,',');
        }
        if (param_3 < 2) {
          FUN_03fb73e4(param_1,*(undefined8 *)(*(long *)(puVar10 + 2) + uVar12 * 8),iVar2,0);
        }
        else {
          if ((*(char *)(lVar3 + 10) != '\x13') && (*(char *)((long)param_2 + 10) != '\x1e')) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(param_1,'[');
          }
          FUN_03fb73e4(param_1,*(undefined8 *)(*(long *)(puVar10 + 2) + uVar12 * 8),iVar2,0);
          if ((*(char *)(lVar3 + 10) != '\x13') && (*(char *)((long)param_2 + 10) != '\x1e')) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(param_1,']');
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *puVar10);
    }
LAB_03fb7a20:
    cVar7 = '>';
    if (param_3 != 0) {
      cVar7 = ']';
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(param_1,cVar7);
  }
  if ((*(byte *)((long)param_2 + 0xb) >> 5 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(param_1,'&');
  }
  if (param_3 == 4) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,", ");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,*(char **)(*plVar4 + 8));
    return;
  }
  if (param_3 != 3) {
    return;
  }
  if (*(char *)((long)param_2 + 10) == '\x13') {
    return;
  }
  if (*(char *)((long)param_2 + 10) == '\x1e') {
    return;
  }
  FUN_03fb43ec(local_88,*(long *)(*plVar4 + 0x10) + 0x18);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_88,0,", ");
  local_60 = (char *)puVar5[2];
  uStack_68 = puVar5[1];
  local_70 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_03f6aab8(param_1,&local_70);
LAB_03fb7730:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  return;
}

