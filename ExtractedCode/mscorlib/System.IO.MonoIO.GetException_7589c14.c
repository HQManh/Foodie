// rea decompile_all
// name: System.IO.MonoIO$$GetException
// address: 0x7589c14
// body: available
// range: 0x7589c14-0x758a31b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_IO_MonoIO__GetException(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint local_24;
  
  if ((DAT_09521b28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09183b80);
    FUN_03f5c2a4(&DAT_09184570);
    FUN_03f5c2a4(&DAT_09186188);
    FUN_03f5c2a4(&DAT_09188388);
    FUN_03f5c2a4(&DAT_09188380);
    FUN_03f5c2a4(&DAT_09188f78);
    FUN_03f5c2a4(&DAT_0918c5d8);
    FUN_03f5c2a4(&DAT_091fb330);
    FUN_03f5c2a4(&DAT_091ff400);
    FUN_03f5c2a4(&DAT_091ff4f8);
    FUN_03f5c2a4(&DAT_09213330);
    FUN_03f5c2a4(&DAT_092013f8);
    FUN_03f5c2a4(&DAT_092057d8);
    FUN_03f5c2a4(&DAT_0920a650);
    FUN_03f5c2a4(&DAT_09205950);
    FUN_03f5c2a4(&DAT_0920cfb0);
    FUN_03f5c2a4(&DAT_091ff5f0);
    FUN_03f5c2a4(&DAT_0920d4c8);
    FUN_03f5c2a4(&DAT_09213418);
    FUN_03f5c2a4(&DAT_09200980);
    FUN_03f5c2a4(&DAT_0920f3c0);
    FUN_03f5c2a4(&DAT_09200a58);
    FUN_03f5c2a4(&DAT_0920a628);
    FUN_03f5c2a4(&DAT_09207120);
    FUN_03f5c2a4(&DAT_091ff558);
    FUN_03f5c2a4(&DAT_09210b10);
    DAT_09521b28 = 1;
  }
  lVar4 = DAT_091c0270;
  if ((int)param_2 < 0x51) {
    if (0x11 < (int)param_2) {
      if ((int)param_2 < 0x21) {
        if (param_2 != 0x1d) {
          if (param_2 == 0x20) {
            uVar3 = System_String__Format(DAT_0920cfb0,param_1,0);
            uVar2 = thunk_FUN_03f9944c(DAT_09186188);
            param_2 = 0x80070020;
            goto LAB_0758a1f0;
          }
          goto LAB_07589fc8;
        }
        uVar3 = System_String__Format(DAT_09213418,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x1d;
      }
      else if (param_2 == 0x21) {
        uVar3 = System_String__Format(DAT_09207120,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x21;
      }
      else if (param_2 == 0x27) {
        uVar3 = System_String__Format(DAT_09200a58,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x27;
      }
      else {
        if (param_2 != 0x50) goto LAB_07589fc8;
        uVar3 = System_String__Format(DAT_091ff400,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x50;
      }
      param_2 = param_2 | 0x80070000;
      goto LAB_0758a1f0;
    }
    if ((int)param_2 < 5) {
      if (param_2 == 2) {
        uVar3 = System_String__Format(DAT_091ff558,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09184570);
        System_IO_FileNotFoundException___ctor(uVar2,uVar3,param_1,0);
        return uVar2;
      }
      if (param_2 == 3) {
        uVar3 = System_String__Format(DAT_091ff4f8,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09183b80);
        System_IO_DirectoryNotFoundException___ctor(uVar2,uVar3,0);
        return uVar2;
      }
      if (param_2 == 4) {
        if (*(int *)(DAT_09188380 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(char *)(*(long *)(DAT_09188380 + 0xb8) + 8) != '\0') {
          if (*(int *)(DAT_09188380 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_03f5c24c();
        }
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x80070004;
        uVar3 = DAT_09210b10;
        goto LAB_0758a1f0;
      }
    }
    else if ((int)param_2 < 0xf) {
      if (param_2 == 5) {
        uVar3 = System_String__Format(DAT_091fb330,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_0918c5d8);
        System_UnauthorizedAccessException___ctor(uVar2,uVar3,0);
        return uVar2;
      }
      if (param_2 == 6) {
        uVar3 = System_String__Format(DAT_092057d8,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x80070006;
        goto LAB_0758a1f0;
      }
    }
    else {
      if (param_2 == 0xf) {
        uVar3 = System_String__Format(DAT_091ff5f0,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x8007000f;
        goto LAB_0758a1f0;
      }
      if (param_2 == 0x11) {
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x11;
        uVar3 = DAT_0920d4c8;
        goto LAB_0758a028;
      }
    }
LAB_07589fc8:
    local_24 = param_2;
    uVar3 = FUN_03f5c42c(DAT_09188388,&local_24);
    uVar3 = System_String__Format(DAT_09213330,uVar3,param_1,0);
  }
  else {
    if (0x91 < param_2) {
      if (param_2 == 0xce) {
        uVar3 = System_String__Format(DAT_0920a628,param_1,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09188f78);
        System_IO_PathTooLongException___ctor(uVar2,uVar3,0);
        return uVar2;
      }
      if (param_2 == 0x10b) {
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x10b;
        uVar3 = DAT_0920f3c0;
LAB_0758a028:
        param_2 = param_2 | 0x80070000;
        goto LAB_0758a1f0;
      }
      if (param_2 == 6000) {
        uVar2 = thunk_FUN_03f9944c(DAT_09186188);
        param_2 = 0x80071770;
        uVar3 = DAT_092013f8;
        goto LAB_0758a1f0;
      }
      goto LAB_07589fc8;
    }
    uVar1 = param_2 & 0xff;
    if (uVar1 == 0x52) {
      puVar5 = &DAT_0920a650;
LAB_0758a0f8:
      uVar3 = System_String__Format(*puVar5,param_1,0);
    }
    else {
      if (uVar1 != 0x57) {
        if (uVar1 != 0x91) goto LAB_07589fc8;
        puVar5 = &DAT_09200980;
        goto LAB_0758a0f8;
      }
      lVar6 = *(long *)(DAT_091c0270 + 0x38);
      if (lVar6 == 0) {
        FUN_03f95ac8(DAT_091c0270);
        lVar6 = *(long *)(lVar4 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      uVar3 = System_String__Format(DAT_09205950,**(undefined8 **)(lVar4 + 0xb8),0);
    }
  }
  uVar2 = thunk_FUN_03f9944c(DAT_09186188);
  param_2 = param_2 | 0x80070000;
LAB_0758a1f0:
  System_IO_IOException___ctor(uVar2,uVar3,param_2,0);
  return uVar2;
}

