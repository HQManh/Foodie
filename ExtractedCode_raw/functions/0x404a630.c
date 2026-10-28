// rea decompile_all
// name: __gxx_personality_v0
// address: 0x404a630
// body: available
// range: 0x404a630-0x404a857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong * __gxx_personality_v0
                  (int param_1,ulong param_2,ulong param_3,long param_4,long param_5,ulong *param_6)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  byte bVar4;
  char *pcVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  byte *extraout_x9;
  ulong uVar20;
  ulong *puVar21;
  undefined8 uVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  byte *pbVar29;
  ulong *puVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined **ppuStack_180;
  byte *pbStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  ulong uStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  byte *pbStack_128;
  ulong uStack_120;
  ulong *puStack_118;
  uint uStack_104;
  ulong *puStack_100;
  uint uStack_f4;
  ulong *puStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  if (param_1 != 1) {
    return (ulong *)0x3;
  }
  if (param_4 == 0) {
    return (ulong *)0x3;
  }
  if (param_5 == 0) {
    return (ulong *)0x3;
  }
  param_3 = param_3 & 0xffffffffffffff00;
  lVar9 = param_5;
  if ((uint)param_2 == 6) {
    if (param_3 == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(param_4 + -0x24);
      uVar22 = *(undefined8 *)(param_4 + -0x10);
      thunk_FUN_0404c644(param_5,0,param_4);
      thunk_FUN_0404c644(param_5,1,(long)iVar2);
      FUN_0404c510(param_5,uVar22);
      if (-1 < iVar2) {
        return (ulong *)0x7;
      }
      goto LAB_0404a6c0;
    }
    FUN_0404a858(&local_60,6,0,param_4);
  }
  else {
    FUN_0404a858(&local_60,param_2,param_3 == 0x434c4e47432b2b00,param_4);
  }
  if (local_38 == 3) {
    return (ulong *)0x3;
  }
  if (local_38 == 8) {
    return (ulong *)0x8;
  }
  if ((param_2 & 1) == 0) {
    if (((uint)param_2 >> 1 & 1) == 0) {
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3da,
                "_Unwind_Reason_Code __cxxabiv1::__gxx_personality_v0(int, _Unwind_Action, uint64_t, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & _UA_CLEANUP_PHASE");
      goto LAB_0404a818;
    }
    if (local_38 == 6) {
      thunk_FUN_0404c644(param_5,0,param_4);
      thunk_FUN_0404c644(param_5,1,local_60);
      FUN_0404c510(param_5,local_48);
      if (-1 < local_60) {
        return (ulong *)0x7;
      }
LAB_0404a6c0:
      *(undefined8 *)(param_4 + -0x10) = 0;
      return (ulong *)0x7;
    }
  }
  else {
    if (local_38 == 6) {
      if (param_3 != 0x434c4e47432b2b00) {
        return (ulong *)0x6;
      }
      *(int *)(param_4 + -0x24) = (int)local_60;
      *(undefined8 *)(param_4 + -0x18) = uStack_50;
      *(undefined8 *)(param_4 + -0x20) = local_58;
      *(undefined8 *)(param_4 + -0x10) = local_48;
      *(undefined8 *)(param_4 + -8) = uStack_40;
      return (ulong *)0x6;
    }
LAB_0404a818:
    __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3c8,
              "_Unwind_Reason_Code __cxxabiv1::__gxx_personality_v0(int, _Unwind_Action, uint64_t, _Unwind_Exception *, _Unwind_Context *)"
              ,"results.reason == _URC_HANDLER_FOUND");
  }
  uStack_104 = 0x1a62d42;
  pcVar5 = "results.reason == _URC_HANDLER_FOUND";
  auVar32 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3db);
  uVar12 = auVar32._8_8_;
  puVar21 = auVar32._0_8_;
  pcStack_b8 = FUN_0404a858;
  uVar27 = uVar12 & 0xffffffff;
  puVar21[4] = 0;
  *(undefined4 *)(puVar21 + 5) = 3;
  puVar21[1] = 0;
  *puVar21 = 0;
  puVar21[3] = 0;
  puVar21[2] = 0;
  uVar26 = auVar32._8_4_;
  if ((uVar12 & 1) == 0) {
    if ((uVar26 >> 1 & 1) == 0) {
      return puVar21;
    }
    if (((uVar26 ^ 0xffffffff) & 0xc) == 0) {
      uVar17 = 2;
      puVar10 = puVar21;
      goto LAB_0404ac4c;
    }
  }
  else if ((uVar12 & 0xe) != 0) {
    return puVar21;
  }
  puStack_f0 = (ulong *)pcVar5;
  puStack_c0 = &stack0xffffffffffffffd0;
  pcVar5 = (char *)FUN_0404c454(lVar9);
  puVar10 = (ulong *)0x0;
  if (pcVar5 != (char *)0x0) {
    puVar21[2] = (ulong)pcVar5;
    puVar6 = (ulong *)FUN_0404c4e0(lVar9);
    uVar7 = FUN_0404c488(lVar9);
    pbStack_d0 = (byte *)(pcVar5 + 1);
    if (*pcVar5 == -1) {
      pbVar29 = (byte *)(pcVar5 + 2);
      bVar1 = *pbStack_d0;
      uVar8 = uVar7;
    }
    else {
      uVar8 = FUN_0404b004(&pbStack_d0,*pcVar5,0);
      pbVar29 = pbStack_d0 + 1;
      bVar1 = *pbStack_d0;
    }
    uStack_e8 = (ulong)bVar1;
    if (uStack_e8 == 0xff) {
      pbStack_e0 = (byte *)0x0;
    }
    else {
      uVar20 = 0;
      uVar18 = 0;
      pbVar23 = pbVar29;
      do {
        pbVar29 = pbVar23 + 1;
        bVar1 = *pbVar23;
        uVar19 = uVar20 & 0x3f;
        uVar20 = uVar20 + 7;
        uVar18 = ((ulong)bVar1 & 0x7f) << uVar19 | uVar18;
        pbVar23 = pbVar29;
      } while ((char)bVar1 < '\0');
      pbStack_e0 = pbVar29 + uVar18;
    }
    uVar20 = 0;
    uVar18 = 0;
    puVar16 = (ulong *)((long)puVar6 + ~uVar7);
    puVar30 = (ulong *)(ulong)*pbVar29;
    pbVar29 = pbVar29 + 1;
    do {
      pbVar23 = pbVar29 + 1;
      bVar1 = *pbVar29;
      uVar7 = uVar20 & 0x3f;
      uVar20 = uVar20 + 7;
      uVar18 = ((ulong)bVar1 & 0x7f) << uVar7 | uVar18;
      pbVar29 = pbVar23;
    } while ((char)bVar1 < '\0');
    pbStack_d8 = pbVar23;
    pbStack_d0 = pbVar23;
    do {
      if (pbVar23 + (uVar18 & 0xffffffff) <= pbStack_d8) break;
      puVar6 = (ulong *)FUN_0404b004(&pbStack_d8,puVar30,0);
      lVar9 = FUN_0404b004(&pbStack_d8,puVar30,0);
      puVar10 = (ulong *)FUN_0404b004(&pbStack_d8,puVar30,0);
      uVar7 = 0;
      uVar20 = 0;
      pbVar29 = pbStack_d8;
      do {
        pbStack_d8 = pbVar29 + 1;
        bVar1 = *pbVar29;
        uVar19 = uVar7 & 0x3f;
        uVar7 = uVar7 + 7;
        uVar20 = ((ulong)bVar1 & 0x7f) << uVar19 | uVar20;
        pbVar29 = pbStack_d8;
      } while ((char)bVar1 < '\0');
      if ((puVar6 <= puVar16) && (puVar16 < (ulong *)(lVar9 + (long)puVar6))) {
        if (puVar10 == (ulong *)0x0) goto LAB_0404ac48;
        puVar21[3] = (ulong)((long)puVar10 + uVar8);
        if (uVar20 == 0) {
          uVar17 = 6;
          if ((uVar12 & 1) != 0) {
            uVar17 = 8;
          }
          goto LAB_0404ac4c;
        }
        puVar6 = (ulong *)(ulong)uStack_104;
        uVar8 = uStack_e8 & 0xf;
        pbVar23 = pbVar23 + uVar20 + (uVar18 & 0xffffffff) + -1;
        puStack_100 = puStack_f0 + 4;
        uStack_f4 = 0x1c1dU >> uVar8 & 1;
        uVar7 = 0;
        goto LAB_0404aa98;
      }
    } while (puVar6 <= puVar16);
    __cxa_begin_catch(puStack_f0);
    if ((uStack_104 & 1) != 0) {
      do {
        FUN_0402eec4(puStack_f0[-7]);
LAB_0404ad50:
        __cxa_begin_catch(puStack_f0);
      } while (((ulong)puVar6 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_0404ac48:
  uVar17 = 8;
LAB_0404ac4c:
  *(undefined4 *)(puVar21 + 5) = uVar17;
  return puVar10;
LAB_0404aa98:
  puVar16 = puStack_f0;
  uVar20 = 0;
  uVar18 = 0;
  pbVar29 = pbVar23;
  do {
    pbVar24 = pbVar29 + 1;
    bVar1 = *pbVar29;
    uVar19 = uVar20 & 0x3f;
    uVar20 = uVar20 + 7;
    uVar18 = ((ulong)bVar1 & 0x7f) << uVar19 | uVar18;
    pbVar29 = pbVar24;
  } while ((char)bVar1 < '\0');
  uVar19 = -1L << (uVar20 & 0x3f);
  if (0x3f < uVar20 || bVar1 < 0x40) {
    uVar19 = 0;
  }
  uVar18 = uVar18 | uVar19;
  uVar20 = uVar7;
  if ((long)uVar18 < 1) {
    uVar20 = (ulong)((uint)(uVar18 == 0) | (uint)uVar7);
    if ((uVar18 != 0) && ((uVar26 >> 3 & 1) == 0)) {
      if (((ulong)puVar6 & 1) == 0) {
        *puVar21 = uVar18;
        puVar21[1] = (ulong)pbVar23;
        goto LAB_0404acec;
      }
      lVar9 = FUN_04049b10(puStack_f0);
      puVar11 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puVar11 = (ulong *)puVar16[-0xb];
      }
      if ((puVar11 == (ulong *)0x0) || (puVar16[-10] == 0)) {
LAB_0404ad70:
        __cxa_begin_catch(puVar16);
        FUN_0402eec4(puVar16[-7]);
        puVar21 = puVar16;
        goto LAB_0404ad84;
      }
      puVar10 = (ulong *)FUN_0404b1f0(uVar18,pbStack_e0,uStack_e8,puVar16[-10],puVar11,puVar16,0);
      param_6 = puVar16;
      uVar20 = uVar7;
      puVar30 = puVar11;
      if (((ulong)puVar10 & 1) != 0) {
        if ((uVar12 & 1) == 0) goto LAB_0404adc4;
        *puVar21 = uVar18;
        puVar21[1] = (ulong)pbVar23;
        uVar17 = 6;
        puVar21[4] = (ulong)puVar11;
        goto LAB_0404ac4c;
      }
    }
  }
  else {
    if (pbStack_e0 == (byte *)0x0) goto LAB_0404ad50;
    if (0xc < (uint)uVar8) goto LAB_0404ad50;
    if (uStack_f4 == 0) goto LAB_0404ad50;
    puStack_c8 = (ulong *)(pbStack_e0 + *(long *)(&UNK_023b2d48 + uVar8 * 8) * uVar18);
    puVar11 = (ulong *)FUN_0404b004(&puStack_c8,uStack_e8,0);
    puVar3 = puStack_f0;
    if (puVar11 == (ulong *)0x0) {
      puVar11 = puVar30;
      if ((uVar12 & 0xd) != 0) {
        *puVar21 = uVar18;
        puVar21[1] = (ulong)pbVar23;
LAB_0404acec:
        puVar6 = puStack_f0;
        puVar10 = (ulong *)FUN_04049b10(puStack_f0);
        if (puVar10 == (ulong *)0x434c4e47432b2b01) {
          puStack_100 = (ulong *)puVar6[-0xb];
        }
        puVar21[4] = (ulong)puStack_100;
        uVar17 = 6;
        goto LAB_0404ac4c;
      }
LAB_0404ad84:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
LAB_0404ada4:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
LAB_0404adc4:
      lVar9 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x327,
                        "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                        ,"actions & _UA_SEARCH_PHASE");
      pcStack_168 = __cxa_call_unexpected;
      uStack_138 = 0xffffffffffffffff;
      ppuStack_170 = &puStack_c0;
      uStack_160 = uVar8;
      puStack_158 = puVar6;
      puStack_150 = puVar11;
      uStack_148 = uVar18;
      pbStack_140 = pbVar23;
      uStack_130 = uVar27;
      pbStack_128 = pbVar24;
      uStack_120 = uVar7;
      puStack_118 = puVar21;
      if (lVar9 == 0) {
        __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __cxa_begin_catch();
      uVar12 = FUN_04049b1c(lVar9);
      if ((uVar12 & 1) == 0) {
        uVar13 = std::get_terminate();
        uVar22 = std::get_unexpected();
        uVar25 = 0;
        lVar28 = 0;
      }
      else {
        uVar22 = *(undefined8 *)(lVar9 + -0x40);
        uVar13 = *(undefined8 *)(lVar9 + -0x38);
        lVar28 = lVar9 + -0x60;
        pbVar23 = *(byte **)(lVar9 + -0x18);
        uVar25 = *(undefined8 *)(lVar9 + -0x10);
        uVar27 = (ulong)*(int *)(lVar9 + -0x24);
      }
      FUN_0402ee78(uVar22);
      __cxa_begin_catch();
      if ((uVar12 & 1) == 0) goto LAB_0404af70;
      pbStack_178 = pbVar23 + 1;
      FUN_0404b004(&pbStack_178,*pbVar23,uVar25);
      bVar1 = *pbStack_178;
      if (bVar1 != 0xff) goto LAB_0404ae8c;
      do {
        FUN_0402eec4(uVar13);
        pbStack_178 = extraout_x9;
LAB_0404ae8c:
        uVar12 = 0;
        uVar7 = 0;
        pbVar29 = pbStack_178 + 1;
        do {
          pbVar24 = pbVar29 + 1;
          bVar4 = *pbVar29;
          uVar8 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar7 = ((ulong)bVar4 & 0x7f) << uVar8 | uVar7;
          pbVar29 = pbVar24;
        } while ((char)bVar4 < '\0');
        pbStack_178 = pbVar24;
        plVar14 = (long *)__cxa_get_globals_fast();
        lVar31 = *plVar14;
      } while (lVar31 == 0);
      bVar4 = FUN_04049b1c(lVar31 + 0x60);
      if ((bVar4 & lVar31 != lVar28) == 1) {
        uVar22 = *(undefined8 *)(lVar31 + 0x10);
        lVar28 = FUN_04049b10(lVar31 + 0x60);
        if (lVar28 == 0x434c4e47432b2b01) {
          lVar28 = *(long *)(lVar31 + 8);
        }
        else {
          lVar28 = lVar31 + 0x80;
        }
        uVar12 = FUN_0404b1f0(uVar27,pbVar24 + uVar7,bVar1,uVar22,lVar28,lVar9,uVar25);
        if ((uVar12 & 1) == 0) {
          lVar9 = plVar14[1];
          *(int *)(lVar31 + 0x38) = -*(int *)(lVar31 + 0x38);
          *(int *)(plVar14 + 1) = (int)lVar9 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar31 + 0x60);
          uVar22 = __cxa_rethrow();
          goto LAB_0404afd4;
        }
      }
      pbVar23 = &std::bad_exception::vtable;
      ppuStack_180 = &PTR__bad_alloc_08fad2b0;
      uVar12 = FUN_0404b1f0(uVar27,pbVar24 + uVar7,bVar1,&std::bad_exception::typeinfo,&ppuStack_180
                            ,lVar9,uVar25);
      if ((uVar12 & 1) != 0) {
        std::bad_alloc::~bad_alloc((bad_alloc *)&ppuStack_180);
LAB_0404af70:
        __cxa_end_catch();
        FUN_0402eec4(uVar13);
      }
      __cxa_end_catch();
      puVar15 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar15 = pbVar23 + 0x10;
      uVar22 = __cxa_throw(puVar15,&std::bad_exception::typeinfo,std::bad_alloc::~bad_alloc);
LAB_0404afd4:
      std::bad_alloc::~bad_alloc((bad_alloc *)&ppuStack_180);
      __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar22);
    }
    puVar10 = puVar11;
    if (((ulong)puVar6 & 1) != 0) {
      lVar9 = FUN_04049b10(puStack_f0);
      puStack_c8 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puStack_c8 = (ulong *)puVar3[-0xb];
      }
      if ((puStack_c8 == (ulong *)0x0) || (puVar3[-10] == 0)) {
        __cxa_begin_catch(puVar3);
        FUN_0402eec4(puVar3[-7]);
        puVar16 = param_6;
        puVar6 = puVar3;
        goto LAB_0404ad70;
      }
      puVar10 = (ulong *)(**(code **)(*puVar11 + 0x20))(puVar11,puVar3[-10],&puStack_c8);
      puVar6 = (ulong *)(ulong)uStack_104;
      puVar30 = puVar11;
      if (((ulong)puVar10 & 1) != 0) {
        if ((uVar12 & 9) != 0) {
          *puVar21 = uVar18;
          puVar21[1] = (ulong)pbVar23;
          *(undefined4 *)(puVar21 + 5) = 6;
          puVar21[4] = (ulong)puStack_c8;
          return puVar10;
        }
        goto LAB_0404ada4;
      }
    }
  }
  uVar7 = 0;
  uVar18 = 0;
  do {
    bVar1 = *pbVar29;
    uVar19 = uVar7 & 0x3f;
    uVar7 = uVar7 + 7;
    uVar18 = ((ulong)bVar1 & 0x7f) << uVar19 | uVar18;
    pbVar29 = pbVar29 + 1;
  } while ((char)bVar1 < '\0');
  uVar19 = -1L << (uVar7 & 0x3f);
  if (0x3f < uVar7 || bVar1 < 0x40) {
    uVar19 = 0;
  }
  if ((uVar18 | uVar19) == 0) goto LAB_0404ac88;
  pbVar23 = pbVar24 + (uVar18 | uVar19);
  uVar7 = uVar20;
  goto LAB_0404aa98;
LAB_0404ac88:
  uVar17 = 6;
  if (((uint)uVar20 & (uVar26 & 2) >> 1) == 0) {
    uVar17 = 8;
  }
  goto LAB_0404ac4c;
}

