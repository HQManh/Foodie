// rea decompile_all
// name: Interop$$GetExceptionForIoErrno
// address: 0x74108c8
// body: available
// range: 0x74108c8-0x7410db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7410c1c to 0x7410f28 Interop$$GetIOException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Interop__GetExceptionForIoErrno(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 local_28;
  
  local_28 = param_1;
  if ((DAT_09520f0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181558);
    FUN_03f5c2a4(&DAT_09183b80);
    FUN_03f5c2a4(&DAT_09184570);
    FUN_03f5c2a4(&DAT_09186188);
    FUN_03f5c2a4(&DAT_09188c68);
    FUN_03f5c2a4(&DAT_09188f78);
    FUN_03f5c2a4(&DAT_0918c5d8);
    FUN_03f5c2a4(&DAT_091ff560);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_0920fb18);
    FUN_03f5c2a4(&DAT_0920fb20);
    FUN_03f5c2a4(&DAT_091ff510);
    FUN_03f5c2a4(&DAT_091fb340);
    FUN_03f5c2a4(&DAT_09211a20);
    FUN_03f5c2a4(&DAT_0920fec0);
    FUN_03f5c2a4(&DAT_0920d640);
    FUN_03f5c2a4(&DAT_091fb338);
    FUN_03f5c2a4(&DAT_0920fac0);
    FUN_03f5c2a4(&DAT_091ff508);
    FUN_03f5c2a4(&DAT_0920f560);
    DAT_09520f0f = 1;
  }
  uVar7 = (uint)param_1;
  if ((int)uVar7 < 0x1000c) {
    if (0x10006 < (int)uVar7) {
      if (uVar7 != 0x10008) {
        if (uVar7 == 0x1000b) {
          uVar5 = thunk_FUN_03f9944c(DAT_09188c68);
          System_OperationCanceledException___ctor(uVar5,0);
          return uVar5;
        }
        goto LAB_07410c0c;
      }
LAB_07410b78:
      uVar5 = Interop__GetIOException(param_1);
      uVar2 = System_String__IsNullOrEmpty(param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = SR__Format(DAT_091fb338,param_2);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c5d8);
      }
      else {
        uVar4 = thunk_FUN_03f9944c(DAT_0918c5d8);
        uVar3 = DAT_091fb340;
      }
      System_UnauthorizedAccessException___ctor(uVar4,uVar3,uVar5,0);
      return uVar4;
    }
    if (uVar7 == 0x10002) goto LAB_07410b78;
    if (uVar7 != 0x10006) goto LAB_07410c0c;
    uVar2 = System_String__IsNullOrEmpty(param_2,0);
    if ((uVar2 & 1) != 0) {
      uVar1 = Interop_ErrorInfo__get_RawErrno(&local_28);
      uVar3 = thunk_FUN_03f9944c(DAT_09186188);
      uVar5 = DAT_0920fb20;
      goto LAB_07410ca4;
    }
    puVar6 = &DAT_0920fb18;
  }
  else {
    if (0x10016 < uVar7) {
      if (uVar7 == 0x10025) {
        uVar2 = System_String__IsNullOrEmpty(param_2,0);
        if ((uVar2 & 1) == 0) {
          uVar5 = SR__Format(DAT_0920fac0,param_2);
          uVar3 = thunk_FUN_03f9944c(DAT_09188f78);
        }
        else {
          uVar3 = thunk_FUN_03f9944c(DAT_09188f78);
          uVar5 = DAT_0920fec0;
        }
        System_IO_PathTooLongException___ctor(uVar3,uVar5,0);
        return uVar3;
      }
      if (uVar7 == 0x10042) goto LAB_07410b78;
      if (uVar7 == 0x1002d) {
        uVar2 = System_String__IsNullOrEmpty(param_2,0);
        if ((param_3 & 1) != 0) {
          if ((uVar2 & 1) == 0) {
            uVar5 = SR__Format(DAT_091ff508,param_2);
            uVar3 = thunk_FUN_03f9944c(DAT_09183b80);
          }
          else {
            uVar3 = thunk_FUN_03f9944c(DAT_09183b80);
            uVar5 = DAT_091ff510;
          }
          System_IO_DirectoryNotFoundException___ctor(uVar3,uVar5,0);
          return uVar3;
        }
        if ((uVar2 & 1) != 0) {
          uVar5 = thunk_FUN_03f9944c(DAT_09184570);
          System_IO_FileNotFoundException___ctor(uVar5,DAT_09211a20,0);
          return uVar5;
        }
        uVar5 = SR__Format(DAT_091ff560,param_2);
        uVar3 = thunk_FUN_03f9944c(DAT_09184570);
        System_IO_FileNotFoundException___ctor(uVar3,uVar5,param_2,0);
        return uVar3;
      }
LAB_07410c0c:
      uVar5 = Interop__GetIOException(param_1);
      return uVar5;
    }
    if (uVar7 != 0x10014) {
      if (uVar7 == 0x10016) {
        uVar5 = thunk_FUN_03f9944c(DAT_09181558);
        System_ArgumentOutOfRangeException___ctor(uVar5,DAT_09225370,DAT_0920d640,0);
        return uVar5;
      }
      goto LAB_07410c0c;
    }
    uVar2 = System_String__IsNullOrEmpty(param_2,0);
    if ((uVar2 & 1) != 0) goto LAB_07410c0c;
    puVar6 = &DAT_0920f560;
  }
  uVar5 = SR__Format(*puVar6,param_2);
  uVar1 = Interop_ErrorInfo__get_RawErrno(&local_28);
  uVar3 = thunk_FUN_03f9944c(DAT_09186188);
LAB_07410ca4:
  System_IO_IOException___ctor(uVar3,uVar5,uVar1,0);
  return uVar3;
}

