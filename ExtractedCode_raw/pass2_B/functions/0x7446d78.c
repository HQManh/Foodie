// rea decompile_all
// name: System.Text.UTF8Encoding$$GetCharCount
// address: 0x7446d78
// body: available
// range: 0x7446d78-0x744721b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7447210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7447218 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_UTF8Encoding__GetCharCount(long param_1,uint *param_2,int param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  
  if ((DAT_0952109d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195898);
    FUN_03f5c2a4(&DAT_0918c558);
    DAT_0952109d = 1;
  }
  if (param_4 == (long *)0x0) {
    uVar10 = 0;
    iVar12 = param_3;
  }
  else {
    if (*param_4 != DAT_09195898) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_4);
    }
    uVar10 = *(uint *)(param_4 + 6);
    iVar12 = param_3 - ((int)uVar10 >> 0x1e);
  }
  puVar1 = (uint *)((long)param_2 + (long)param_3);
  puVar9 = param_2;
  if (param_2 < puVar1) {
    lVar7 = 0;
    uVar6 = uVar10;
LAB_07446e24:
    bVar3 = (byte)*puVar9;
    uVar10 = (uint)bVar3;
    if (uVar6 == 0) {
      puVar9 = (uint *)((long)puVar9 + 1);
      uVar6 = uVar10;
      iVar4 = iVar12;
      goto joined_r0x07446e60;
    }
    if ((uVar10 & 0xc0) == 0x80) {
      puVar9 = (uint *)((long)puVar9 + 1);
      if ((uVar6 >> 0x17 & 1) == 0) {
        uVar10 = uVar10 & 0x3f | uVar6 << 6;
        if ((uVar6 >> 0x16 & 1) == 0) {
          uVar6 = uVar10;
          if (((uVar10 & 0x3e0) == 0) || ((uVar10 & 0x3e0) == 0x360)) goto LAB_07446ec4;
        }
        else if ((uVar6 >> 0x11 & 1) == 0) {
          if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = uVar10;
          if (0xf0 < (uVar10 & 0x1f0) - 0x10) goto LAB_07446ec4;
        }
      }
      else {
        iVar4 = iVar12 - (uint)((uVar6 & 0x407c00) == 0x400000);
        do {
          if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar11 = puVar9;
          if (0xd < (int)((long)puVar1 - (long)puVar9)) {
            puVar11 = (uint *)((long)puVar9 + (((long)puVar1 - (long)puVar9 & 0xffffffffU) - 7));
            iVar12 = iVar4;
            goto LAB_07446fc8;
          }
          do {
            if (puVar1 <= puVar11) {
              return iVar4;
            }
            puVar9 = (uint *)((long)puVar11 + 1);
            bVar3 = (byte)*puVar11;
            puVar11 = puVar9;
          } while (-1 < (char)bVar3);
          uVar6 = (uint)bVar3;
joined_r0x07446e60:
        } while (-1 < (char)bVar3);
        iVar12 = iVar4 + -1;
        if ((uVar6 >> 6 & 1) == 0) goto LAB_07446ec4;
        if ((uVar6 >> 5 & 1) == 0) {
          if ((uVar6 & 0x1f) < 2) goto LAB_07446ec4;
          uVar10 = uVar6 & 0x1f | 0x800000;
        }
        else {
          uVar10 = uVar6 & 0xf;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar10 = uVar10 | 0x48228000;
            iVar12 = iVar4 + -2;
          }
          else {
            if (4 < uVar10) goto LAB_07446ec4;
            iVar12 = iVar4 + -2;
            uVar10 = uVar10 | 0x504d0c00;
          }
        }
      }
      goto LAB_07446f28;
    }
    iVar12 = iVar12 + ((int)uVar6 >> 0x1e);
LAB_07446ec4:
    if (lVar7 == 0) {
      if (param_4 == (long *)0x0) {
        plVar5 = *(long **)(param_1 + 0x30);
        if (plVar5 == (long *)0x0) goto LAB_07447210;
        lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
      }
      else {
        lVar7 = System_Text_Decoder__get_FallbackBuffer(param_4,0);
      }
      if (lVar7 == 0) goto LAB_07447210;
      System_Text_DecoderFallbackBuffer__InternalInitialize(lVar7,param_2,0,0);
    }
    iVar4 = System_Text_UTF8Encoding__FallbackInvalidByteSequence(param_1,puVar9,uVar6,lVar7);
    uVar10 = 0;
    iVar12 = iVar4 + iVar12;
    goto LAB_07446f28;
  }
  lVar7 = 0;
LAB_07447174:
  if (uVar10 == 0) {
    return iVar12;
  }
  iVar12 = iVar12 + ((int)uVar10 >> 0x1e);
  if (param_4 == (long *)0x0) {
    if (lVar7 != 0) goto LAB_074471d8;
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 == (long *)0x0) goto LAB_07447210;
    lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
  }
  else {
    if ((char)param_4[5] == '\0') {
      return iVar12;
    }
    if (lVar7 != 0) goto LAB_074471d8;
    lVar7 = System_Text_Decoder__get_FallbackBuffer(param_4,0);
  }
  if (lVar7 == 0) {
LAB_07447210:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Text_DecoderFallbackBuffer__InternalInitialize(lVar7,param_2,0,0);
LAB_074471d8:
  iVar4 = System_Text_UTF8Encoding__FallbackInvalidByteSequence(param_1,puVar9,uVar10,lVar7);
  return iVar4 + iVar12;
LAB_07446fc8:
  do {
    if (puVar11 <= puVar9) goto LAB_07447154;
    puVar8 = (uint *)((long)puVar9 + 1);
    bVar3 = (byte)*puVar9;
    if ((char)bVar3 < '\0') {
LAB_07447058:
      uVar10 = (uint)bVar3;
      break;
    }
    if (((ulong)puVar9 & 1) == 0) {
      bVar3 = *(byte *)((long)puVar9 + 1);
      puVar8 = (uint *)((long)puVar9 + 2);
      if ((char)bVar3 < '\0') goto LAB_07447058;
    }
    puVar9 = puVar8;
    if (((uint)puVar9 >> 1 & 1) == 0) {
LAB_07447000:
      while( true ) {
        if (puVar11 <= puVar9) {
          uVar10 = 0;
          goto LAB_07446f28;
        }
        uVar10 = *puVar9;
        puVar8 = puVar9;
        if (((puVar9[1] | uVar10) & 0x80808080) != 0) break;
        puVar8 = puVar9 + 2;
        if (puVar11 <= puVar8) {
          uVar10 = 0;
          puVar9 = puVar8;
          goto LAB_07446f28;
        }
        uVar10 = puVar9[2];
        if (((puVar9[3] | uVar10) & 0x80808080) != 0) break;
        puVar9 = puVar9 + 4;
      }
      uVar10 = uVar10 & 0xff;
    }
    else {
      uVar10 = (uint)(ushort)*puVar9;
      puVar8 = puVar9;
      if (((ushort)*puVar9 & 0x8080) == 0) {
        puVar9 = (uint *)((long)puVar9 + 2);
        goto LAB_07447000;
      }
    }
    uVar10 = uVar10 & 0xff;
    puVar9 = (uint *)((long)puVar8 + 1);
    puVar8 = puVar9;
  } while (uVar10 < 0x80);
  if ((uVar10 >> 6 & 1) != 0) {
    puVar9 = (uint *)((long)puVar8 + 1);
    uVar6 = (uint)(byte)*puVar8;
    if ((uVar6 & 0xc0) == 0x80) {
      if ((uVar10 >> 5 & 1) == 0) {
        if ((uVar10 & 0x1e) == 0) goto LAB_07447160;
      }
      else {
        uVar2 = (uVar10 & 0xf) << 6;
        if ((uVar10 >> 4 & 1) == 0) {
          uVar2 = uVar6 & 0x20 | uVar2;
          if (((uVar2 == 0) || (uVar2 == 0x360)) || ((*(byte *)puVar9 & 0xc0) != 0x80))
          goto LAB_07447160;
          puVar9 = (uint *)((long)puVar8 + 2);
        }
        else {
          bVar3 = *(byte *)puVar9;
          if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (((0xf < ((uVar6 & 0x3f | uVar2) >> 4) - 1) || ((bVar3 & 0xc0) != 0x80)) ||
             ((*puVar8 & 0xc00000) != 0x800000)) goto LAB_07447160;
          puVar9 = (uint *)((long)puVar8 + 3);
        }
        iVar12 = iVar12 + -1;
      }
      iVar12 = iVar12 + -1;
      goto LAB_07446fc8;
    }
  }
LAB_07447160:
  uVar10 = 0;
  puVar9 = (uint *)((long)puVar8 - 1);
  goto LAB_07446f28;
LAB_07447154:
  uVar10 = 0;
LAB_07446f28:
  uVar6 = uVar10;
  if (puVar1 <= puVar9) goto LAB_07447174;
  goto LAB_07446e24;
}

